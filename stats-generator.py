from datetime import datetime
import os
import re
from pathlib import Path
import sys
from packaging import version  # Install with: pip install packaging


def parse_version_string(ver_str: str, fix_mode: bool = False):
    """Parses version string. Disallows leading 'v' unless fix_mode is enabled."""
    stripped = ver_str.strip()

    if stripped.lower().startswith("v"):
        fixed_str = stripped.lstrip("vV")
        if fix_mode:
            print(f"🔧 **Auto-Fixed**: Version string '{ver_str}' corrected to '{fixed_str}'.")
            stripped = fixed_str
        else:
            print(
                f"❌ **Test Failure / Error**: Version string '{ver_str}' uses a leading 'v'. "
                "Leading 'v' is strictly prohibited. Use `--fix` to automatically strip it, or use pure version numbers (e.g., '1.0.0')."
            )
            sys.exit(1)

    try:
        return version.parse(stripped), stripped
    except Exception:
        return None, ver_str


def get_mkdocs_indexed_files(mkdocs_path: str = "mkdocs.yml") -> set:
    """Scans mkdocs.yml to find all .md files referenced in the navigation configuration."""
    indexed = set()
    if not os.path.exists(mkdocs_path):
        return indexed

    with open(mkdocs_path, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()
        matches = re.findall(r"([\w\-\/\.]+\.md)", content, re.IGNORECASE)
        for m in matches:
            clean_path = m.lstrip("./")
            if clean_path.startswith("docs/"):
                clean_path = clean_path[5:]
            indexed.add(clean_path)
    return indexed


def generate_docs_stats(
        docs_folder: str = "docs",
        latest_version_input: str = "1.0.0",
        ignore_list: list = None,
        fix_mode: bool = False,
):
    if ignore_list is None:
        ignore_list = ["index.md", "incomplete-docs.md"]

    folder = Path(docs_folder)
    if not folder.exists() or not folder.is_dir():
        print(f"Error: Directory '{docs_folder}' does not exist.")
        return None

    target_ver, clean_target = parse_version_string(latest_version_input, fix_mode=fix_mode)
    if target_ver is None:
        print(f"Error: Provided latest version '{latest_version_input}' is invalid.")
        sys.exit(1)

    version_pattern = re.compile(
        r"^######\s*version:\s*(v?[\w\.\-]+)", re.IGNORECASE
    )

    outdated_files = []
    incomplete_refs = []
    all_md_files = list(folder.rglob("*.md"))

    indexed_files = get_mkdocs_indexed_files("mkdocs.yml")
    unindexed_files = []

    for md_file in all_md_files:
        rel_path = md_file.relative_to(folder).as_posix()

        if rel_path not in indexed_files and rel_path not in ignore_list:
            unindexed_files.append(rel_path)

        if md_file.name in ignore_list or any(
                ignored in str(md_file) for ignored in ignore_list
        ):
            continue

        found_version = None
        file_lines = []
        version_line_idx = None

        with open(md_file, "r", encoding="utf-8", errors="ignore") as f:
            file_lines = f.readlines()

        for line_no, line in enumerate(file_lines, start=1):
            v_match = version_pattern.search(line)
            if v_match and not found_version:
                raw_v = v_match.group(1)
                if raw_v.lower().startswith("v"):
                    fixed_v = raw_v.lstrip("vV")
                    if fix_mode:
                        print(f"🔧 **Auto-Fixed**: File `{rel_path}` version tag corrected from `{raw_v}` to `{fixed_v}`.")
                        file_lines[line_no - 1] = line.replace(raw_v, fixed_v)
                        with open(md_file, "w", encoding="utf-8") as wf:
                            wf.writelines(file_lines)
                        raw_v = fixed_v
                    else:
                        print(
                            f"❌ **Test Failure**: File `{rel_path}` on line {line_no} uses version `{raw_v}`. "
                            "Leading 'v' is not allowed. Run with `--fix` to auto-correct."
                        )
                        sys.exit(1)
                found_version = raw_v
                version_line_idx = line_no - 1

            if "incomplete-docs.md" in line:
                incomplete_refs.append((rel_path, line_no, line.strip()))

        # Handle missing version tag
        if not found_version:
            if fix_mode:
                print(f"🔧 **Auto-Fixed**: Added missing version tag (`{clean_target}`) to `{rel_path}`.")
                file_lines.insert(0, f"###### version: {clean_target}\n\n")
                with open(md_file, "w", encoding="utf-8") as wf:
                    wf.writelines(file_lines)
                found_version = clean_target
            else:
                print(
                    f"❌ **Test Failure**: File `{rel_path}` is missing a version tag! "
                    "All documentation files must include a version header. Run with `--fix` to auto-inject."
                )
                sys.exit(1)

        file_ver, _ = parse_version_string(found_version, fix_mode=fix_mode)
        if file_ver and file_ver < target_ver:
            outdated_files.append((rel_path, found_version))

    current_date = datetime.now().strftime("%Y-%m-%d")

    stats_lines = [
        "## **Stats**",
        f"*(Automatically updated against target version: `{clean_target}`)*",
        f"*(Last updated: {current_date})*",
        "",
        "### Incomplete Documentation References",
        f"- **Total References:** {len(incomplete_refs)}",
    ]

    if incomplete_refs:
        stats_lines.append("- **Files referencing `incomplete-docs.md`:**")
        for fpath in sorted(list(set(r[0] for r in incomplete_refs))):
            stats_lines.append(f"  - `{fpath}`")

    stats_lines.extend(
        ["\n### Outdated Files", f"- **Total Outdated:** {len(outdated_files)}"]
    )
    if outdated_files:
        stats_lines.append("- **List of outdated files:**")
        for fpath, ver in outdated_files:
            stats_lines.append(f"  - `{fpath}` (Version: `{ver}`)")

    stats_lines.extend(
        [
            "\n### Unindexed Documentation",
            f"- **Total Unindexed Files:** {len(unindexed_files)}",
        ]
    )
    if unindexed_files:
        stats_lines.append("- **Files in `docs/` not found in `mkdocs.yml` nav:**")
        for fpath in sorted(unindexed_files):
            stats_lines.append(f"  - `{fpath}`")

    return "\n".join(stats_lines)


def write_generated_stats_file(
        docs_folder: str = "docs",
        latest_version_input: str = "1.0.0",
        ignore_list: list = None,
        fix_mode: bool = False,
        output_filename: str = "GENERATED-STATS.txt",
):
    new_stats_content = generate_docs_stats(
        docs_folder, latest_version_input, ignore_list, fix_mode=fix_mode
    )
    if not new_stats_content:
        return

    output_path = Path(output_filename)

    with open(output_path, "w", encoding="utf-8") as f:
        f.write(new_stats_content + "\n")

    print(f"Successfully wrote documentation statistics to `{output_path}`.")


if __name__ == "__main__":
    # Check if run with '--fix' argument
    fix_mode_enabled = "--fix" in sys.argv
    if fix_mode_enabled:
        print("🛠️ **Fix Mode Enabled**: Will automatically correct version formats and inject missing versions.")

    target_version_path = Path("TARGET_VERSION.txt")

    if target_version_path.exists():
        with open(target_version_path, "r", encoding="utf-8") as f:
            latest_ver_input = f.read().strip()
    else:
        latest_ver_input = "1.0.0"
        print(
            "Warning: 'TARGET_VERSION.txt' not found. Defaulting to"
            f" '{latest_ver_input}'."
        )

    files_to_ignore = ["index.md", "incomplete-docs.md"]
    write_generated_stats_file("docs", latest_ver_input, ignore_list=files_to_ignore, fix_mode=fix_mode_enabled)