from datetime import datetime
import os
import re
from pathlib import Path
import sys
from concurrent.futures import ThreadPoolExecutor
from packaging import version  # Install with: pip install packaging

# Pre-compiled regex patterns for YAML frontmatter & fields
FRONTMATTER_PATTERN = re.compile(r"^---\s*\n(.*?)\n---", re.DOTALL)
VERSION_PATTERN = re.compile(r"^\s*version:\s*(v?[\w\.\-]+)", re.IGNORECASE | re.MULTILINE)
STATUS_PATTERN = re.compile(r"^\s*status:\s*([\w\-]+)", re.IGNORECASE | re.MULTILINE)

# Pattern to capture markdown paths inside MkDocs YAML nav configuration
MKDOCS_MD_PATTERN = re.compile(r"([\w\-\/\.]+\.md)", re.IGNORECASE)

UNTESTED_UNCOMMENTED = "###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**"
UNTESTED_COMMENTED = f"[//]: # ({UNTESTED_UNCOMMENTED})"


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


def get_mkdocs_indexed_files(docs_folder: str = "docs") -> set:
    """Scans mkdocs.yml to find all referenced .md files."""
    config_file = Path("mkdocs.yml")
    if not config_file.exists():
        config_file = Path("mkdocs.yaml")
        if not config_file.exists():
            return set()

    try:
        content = config_file.read_text(encoding="utf-8", errors="ignore")
    except Exception:
        return set()

    indexed = set()
    raw_links = MKDOCS_MD_PATTERN.findall(content)

    for raw_link in raw_links:
        if raw_link.startswith(("http://", "https://", "mailto:")):
            continue

        clean_path = raw_link.split("#")[0].strip()
        if not clean_path:
            continue

        clean_path = clean_path.lstrip("./").lstrip("/")
        if clean_path.startswith("docs/"):
            clean_path = clean_path[5:]

        if clean_path.endswith(".md"):
            indexed.add(clean_path)

    return indexed


def process_single_file(
        md_file: Path,
        folder: Path,
        indexed_files: set,
        ignore_set: set,
        target_ver,
        clean_target: str,
        fix_mode: bool,
) -> dict:
    """Processes a single markdown file in a worker thread."""
    rel_path = md_file.relative_to(folder).as_posix()
    file_str = str(md_file)

    is_unindexed = (rel_path not in indexed_files) and (rel_path not in ignore_set)

    if md_file.name in ignore_set or any(ignored in file_str for ignored in ignore_set):
        return {
            "unindexed": rel_path if is_unindexed else None,
            "untested_legacy": None,
            "outdated": None,
            "status_entry": None,
            "incomplete_refs": [],
        }

    try:
        content = md_file.read_text(encoding="utf-8", errors="ignore")
    except Exception:
        return {
            "unindexed": rel_path if is_unindexed else None,
            "untested_legacy": None,
            "outdated": None,
            "status_entry": None,
            "incomplete_refs": [],
        }

    has_untested_legacy = (UNTESTED_UNCOMMENTED in content) and (UNTESTED_COMMENTED not in content)

    found_version = None
    found_status = "unspecified"
    modified = False

    frontmatter_match = FRONTMATTER_PATTERN.search(content)

    if frontmatter_match:
        fm_block = frontmatter_match.group(1)

        v_match = VERSION_PATTERN.search(fm_block)
        if v_match:
            raw_v = v_match.group(1)
            if raw_v.lower().startswith("v"):
                fixed_v = raw_v.lstrip("vV")
                if fix_mode:
                    print(f"🔧 **Auto-Fixed**: File `{rel_path}` version tag corrected from `{raw_v}` to `{fixed_v}`.")
                    content = content.replace(f"version: {raw_v}", f"version: {fixed_v}", 1)
                    raw_v = fixed_v
                    modified = True
                else:
                    print(
                        f"❌ **Test Failure**: File `{rel_path}` uses version `{raw_v}`. "
                        "Leading 'v' is not allowed. Run with `--fix` to auto-correct."
                    )
                    sys.exit(1)
            found_version = raw_v

        s_match = STATUS_PATTERN.search(fm_block)
        if s_match:
            found_status = s_match.group(1).lower()
    else:
        # Fallback check anywhere in document if no YAML frontmatter block is present
        v_match = VERSION_PATTERN.search(content)
        if v_match:
            raw_v = v_match.group(1)
            if raw_v.lower().startswith("v"):
                fixed_v = raw_v.lstrip("vV")
                if fix_mode:
                    print(f"🔧 **Auto-Fixed**: File `{rel_path}` version tag corrected from `{raw_v}` to `{fixed_v}`.")
                    content = content.replace(f"version: {raw_v}", f"version: {fixed_v}", 1)
                    raw_v = fixed_v
                    modified = True
                else:
                    print(
                        f"❌ **Test Failure**: File `{rel_path}` uses version `{raw_v}`. "
                        "Leading 'v' is not allowed. Run with `--fix` to auto-correct."
                    )
                    sys.exit(1)
            found_version = raw_v

    # Handle missing version / missing frontmatter auto-injection
    if not found_version:
        if fix_mode:
            print(f"🔧 **Auto-Fixed**: Injecting YAML frontmatter (`version: {clean_target}`, `status: untested`) into `{rel_path}`.")
            new_frontmatter = f"---\nversion: {clean_target}\nstatus: untested\n---\n\n"
            content = new_frontmatter + content
            found_version = clean_target
            found_status = "untested"
            modified = True
        else:
            print(
                f"❌ **Test Failure**: File `{rel_path}` is missing frontmatter version metadata! "
                "Run with `--fix` to auto-inject YAML frontmatter."
            )
            sys.exit(1)

    incomplete_refs = []
    if "incomplete-docs.md" in content:
        lines = content.splitlines()
        for line_idx, line in enumerate(lines):
            if "incomplete-docs.md" in line:
                incomplete_refs.append((rel_path, line_idx + 1, line.strip()))

    if modified:
        md_file.write_text(content, encoding="utf-8")

    file_ver, _ = parse_version_string(found_version, fix_mode=fix_mode)
    is_outdated = (file_ver and file_ver < target_ver)

    return {
        "unindexed": rel_path if is_unindexed else None,
        "untested_legacy": rel_path if has_untested_legacy else None,
        "outdated": (rel_path, found_version) if is_outdated else None,
        "status_entry": (rel_path, found_status, found_version),
        "incomplete_refs": incomplete_refs,
    }


def generate_docs_stats(
        docs_folder: str = "docs",
        latest_version_input: str = "1.0.0",
        ignore_list: list = None,
        fix_mode: bool = False,
        max_workers: int = 16,
):
    if ignore_list is None:
        ignore_list = ["index.md", "incomplete-docs.md"]

    ignore_set = set(ignore_list)
    folder = Path(docs_folder)
    if not folder.exists() or not folder.is_dir():
        print(f"Error: Directory '{docs_folder}' does not exist.")
        return None

    target_ver, clean_target = parse_version_string(latest_version_input, fix_mode=fix_mode)
    if target_ver is None:
        print(f"Error: Provided latest version '{latest_version_input}' is invalid.")
        sys.exit(1)

    all_md_files = list(folder.rglob("*.md"))
    indexed_files = get_mkdocs_indexed_files(docs_folder)

    unindexed_files = []
    untested_legacy_files = []
    outdated_files = []
    incomplete_refs = []
    status_categories = {}

    with ThreadPoolExecutor(max_workers=max_workers) as executor:
        futures = [
            executor.submit(
                process_single_file,
                md_file,
                folder,
                indexed_files,
                ignore_set,
                target_ver,
                clean_target,
                fix_mode,
            )
            for md_file in all_md_files
        ]

        for future in futures:
            res = future.result()
            if res["unindexed"]:
                unindexed_files.append(res["unindexed"])
            if res["untested_legacy"]:
                untested_legacy_files.append(res["untested_legacy"])
            if res["outdated"]:
                outdated_files.append(res["outdated"])
            if res["status_entry"]:
                fpath, st, ver = res["status_entry"]
                status_categories.setdefault(st, []).append((fpath, ver))
            if res["incomplete_refs"]:
                incomplete_refs.extend(res["incomplete_refs"])

    current_date = datetime.now().strftime("%Y-%m-%d")

    stats_lines = [
        "## **Stats**",
        f"*(Automatically updated against target version: `{clean_target}`)*",
        f"*(Last updated: {current_date})*",
        "",
        "### Documentation Status Breakdown",
    ]

    for st_name in sorted(status_categories.keys()):
        files_in_status = status_categories[st_name]
        stats_lines.append(f"\n#### Status: `{st_name}` ({len(files_in_status)})")
        for fpath, ver in sorted(files_in_status):
            stats_lines.append(f"- `{fpath}` (v`{ver}`)")

    stats_lines.extend(
        ["\n### Outdated Files", f"- **Total Outdated:** {len(outdated_files)}"]
    )
    if outdated_files:
        stats_lines.append("- **List of outdated files:**")
        for fpath, ver in sorted(outdated_files):
            stats_lines.append(f"  - `{fpath}` (Version: `{ver}`)")

    stats_lines.extend(
        [
            "\n### Unindexed Documentation",
            f"- **Total Unindexed Files:** {len(unindexed_files)}",
        ]
    )
    if unindexed_files:
        stats_lines.append("- **Files in `docs/` not found in `mkdocs.yml`:**")
        for fpath in sorted(unindexed_files):
            stats_lines.append(f"  - `{fpath}`")

    stats_lines.extend(
        [
            "\n### Incomplete Documentation References",
            f"- **Total References:** {len(incomplete_refs)}",
        ]
    )
    if incomplete_refs:
        stats_lines.append("- **Files referencing `incomplete-docs.md`:**")
        for fpath in sorted(list(set(r[0] for r in incomplete_refs))):
            stats_lines.append(f"  - `{fpath}`")

    if untested_legacy_files:
        stats_lines.extend(
            [
                "\n### Legacy Untested Inline Warnings",
                f"- **Total Files with Legacy Untested Warning:** {len(untested_legacy_files)}",
            ]
        )
        for fpath in sorted(untested_legacy_files):
            stats_lines.append(f"  - `{fpath}`")

    return "\n".join(stats_lines)


def write_generated_stats_file(
        docs_folder: str = "docs",
        latest_version_input: str = "1.0.0",
        ignore_list: list = None,
        fix_mode: bool = False,
        output_filename: str = "docs/GENERATED-STATS.md",
):
    new_stats_content = generate_docs_stats(
        docs_folder, latest_version_input, ignore_list, fix_mode=fix_mode
    )
    if not new_stats_content:
        return

    output_path = Path(output_filename)

    if output_path.exists():
        existing_content = output_path.read_text(encoding="utf-8").strip()
        if existing_content == new_stats_content.strip():
            return

    output_path.write_text(new_stats_content + "\n", encoding="utf-8")
    print(f"Successfully wrote documentation statistics to `{output_path}`.")


if __name__ == "__main__":
    fix_mode_enabled = "--fix" in sys.argv
    if fix_mode_enabled:
        print("🛠️ **Fix Mode Enabled**: Will automatically correct version formats and inject missing frontmatter.")

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

    files_to_ignore = ["index.md", "incomplete-docs.md", "GENERATED-STATS.md", "what-does-this-mean.md"]
    write_generated_stats_file("docs", latest_ver_input, ignore_list=files_to_ignore, fix_mode=fix_mode_enabled)