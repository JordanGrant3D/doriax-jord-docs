from concurrent.futures import ProcessPoolExecutor
from datetime import datetime
from pathlib import Path
import shutil
import subprocess
import atexit
import sys

# ==================== CONFIGURATION ====================
NUM_INSTANCES = 6
code_dir = Path("/home/jordan/Documents/doriax/engine/doriax-jord-docs/code")
base_project_root = Path("/home/jordan/Documents/doriax/engine/doriax")
log_file_path = base_project_root / "build_test_run.log"
parent_dir = Path("/dev/shm/doriax_instances")
# ========================================================


def cleanup_ram():
    """Automatically removes temporary RAM instances from /dev/shm when the script exits."""
    if parent_dir.exists():
        print(f"\n[INFO] Cleaning up RAM instances from {parent_dir}...", flush=True)
        shutil.rmtree(parent_dir, ignore_errors=True)
        print("[INFO] Cleanup complete. RAM freed.", flush=True)


# Register cleanup to run automatically on exit (even on Ctrl+C or errors)
atexit.register(cleanup_ram)


def log_message(message):
    """Timestamped logger that instantly writes to both the console and the log file with immediate flushing."""
    timestamp = datetime.now().strftime("[%Y-%m-%d %H:%M:%S]")
    formatted_msg = f"{timestamp} {message}"

    print(formatted_msg, flush=True)
    try:
        with open(log_file_path, "a", encoding="utf-8") as f:
            f.write(formatted_msg + "\n")
            f.flush()
    except Exception as e:
        print(f"{timestamp} [ERROR] Failed to write to log file: {e}", flush=True)


def worker_process(worker_id, assigned_files):
    """Runs in a separate process with its own isolated project copy in RAM, streaming live updates."""
    instance_root = parent_dir / f"doriax_instance_{worker_id}"
    engine_source_dir = instance_root / "engine" / "core"
    build_dir = instance_root / "build"

    try:
        # 1. Create isolated clone in RAM
        log_message(f"[SETUP] [Instance {worker_id}] Cloning project into RAM ({instance_root})...")
        if instance_root.exists():
            shutil.rmtree(instance_root)
        shutil.copytree(base_project_root, instance_root)

        # 2. Configure CMake using Ninja with live output tracking
        log_message(f"[CONFIG] [Instance {worker_id}] Running CMake configuration...")
        configure_cmd = [
            "cmake",
            "-S",
            str(instance_root),
            "-B",
            str(build_dir),
            "-G",
            "Ninja",
        ]

        config_process = subprocess.Popen(
            configure_cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
            bufsize=1
        )
        for line in config_process.stdout:
            line_str = line.strip()
            if line_str and ("-- " in line_str or "FATAL" in line_str or "Error" in line_str):
                log_message(f"[CMAKE] [Instance {worker_id}] {line_str}")
        config_process.wait()

        if config_process.returncode != 0:
            log_message(f"[ERROR] [Instance {worker_id}] CMake configuration failed.")
            return

        # 3. Process assigned files sequentially within this worker instance
        total_files = len(assigned_files)
        for i, cpp_file_path in enumerate(assigned_files, 1):
            cpp_file = Path(cpp_file_path)
            h_file = cpp_file.with_suffix(".h")
            rel_path = cpp_file.relative_to(code_dir)

            if not h_file.exists():
                log_message(f"[SKIP] [Instance {worker_id}] ({i}/{total_files}) Matching header not found for {rel_path}")
                continue

            target_cpp = engine_source_dir / "testScript.cpp"
            target_h = engine_source_dir / "testScript.h"

            log_message(f"[START] [Instance {worker_id}] ({i}/{total_files}) Processing {rel_path}...")

            try:
                content = cpp_file.read_text(encoding="utf-8")
                fixed_content = content.replace(
                    '#include "testerScript.h"', '#include "testScript.h"'
                )
                target_cpp.write_text(fixed_content, encoding="utf-8")
                shutil.copy(h_file, target_h)

                # Target specifically the engine library to bypass shared editor-copy conflicts
                build_cmd = ["cmake", "--build", str(build_dir), "--target", "doriax", "--parallel", "2"]

                build_process = subprocess.Popen(
                    build_cmd,
                    stdout=subprocess.PIPE,
                    stderr=subprocess.STDOUT,
                    text=True,
                    bufsize=1
                )

                build_output = []
                for line in build_process.stdout:
                    cleaned_line = line.strip()
                    if cleaned_line:
                        build_output.append(cleaned_line)
                        if any(keyword in cleaned_line for keyword in ["Building CXX object", "Linking", "FAILED:"]):
                            log_message(f"    [COMPILER] [Instance {worker_id}] {cleaned_line}")

                build_process.wait()

                if build_process.returncode == 0:
                    log_message(f"[PASS] [Instance {worker_id}] Successfully built {rel_path}")
                else:
                    err_snippet = "\n".join(build_output[-12:])
                    log_message(f"[FAIL] [Instance {worker_id}] {rel_path}\n{err_snippet}\n" + "-" * 40)

            except Exception as e:
                log_message(f"[ERROR] [Instance {worker_id}] Failed for {rel_path}: {e}")

    except Exception as e:
        log_message(f"[ERROR] Instance {worker_id} setup failed: {e}")


def test_files_as_project():
    parent_dir.mkdir(parents=True, exist_ok=True)

    try:
        with open(log_file_path, "w", encoding="utf-8") as f:
            f.write(f"=== RAM-Based Build Test Run Started at {datetime.now().strftime('%Y-%m-%d %H:%M:%S')} ===\n")
    except Exception:
        pass

    if not code_dir.exists():
        log_message(f"Error: Code directory does not exist: {code_dir}")
        return

    cpp_files = sorted(list(code_dir.rglob("*.cpp")))
    if not cpp_files:
        log_message(f"No .cpp files found in {code_dir}")
        return

    log_message(f"Found {len(cpp_files)} files. Running with {NUM_INSTANCES} instance(s)...")

    # Split files into chunks based on NUM_INSTANCES
    chunks = [[] for _ in range(NUM_INSTANCES)]
    for idx, file in enumerate(cpp_files):
        chunks[idx % NUM_INSTANCES].append(file)

    # Run processes in parallel
    with ProcessPoolExecutor(max_workers=NUM_INSTANCES) as executor:
        futures = [
            executor.submit(worker_process, i + 1, [str(f) for f in chunks[i]])
            for i in range(NUM_INSTANCES)
        ]
        for future in futures:
            future.result()

    log_message("=== Build Test Run Completed ===")


if __name__ == "__main__":
    test_files_as_project()
