from datetime import datetime
import os
import re
from pathlib import Path
from packaging import version  # Install with: pip install packaging


def parse_version_string(ver_str: str):
    """Strips leading 'v' or whitespace and attempts to parse into a packaging Version.

    Returns (version_object, raw_clean_string) or (None, ver_str) if invalid.
    """
    clean_str = ver_str.strip().lstrip("v")
    try:
        return version.parse(clean_str), clean_str
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
        latest_version_input: str = "v1.0.0",
        ignore_list: list = None,
):
    if ignore_list is None:
        ignore_list = ["index.md", "incomplete-docs.md"]

    folder = Path(docs_folder)
    if not folder.exists() or not folder.is_dir():
        print(f"Error: Directory '{docs_folder}' does not exist.")
        return None

    target_ver, clean_target = parse_version_string(latest_version_input)
    if target_ver is None:
        print(f"Error: Provided latest version '{latest_version_input}' is invalid.")
        return None

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

        # Check if unindexed (ignoring files specified in ignore_list)
        if rel_path not in indexed_files and rel_path not in ignore_list:
            unindexed_files.append(rel_path)

        if md_file.name in ignore_list or any(
                ignored in str(md_file) for ignored in ignore_list
        ):
            continue

        found_version = None
        with open(md_file, "r", encoding="utf-8", errors="ignore") as f:
            for line_no, line in enumerate(f, start=1):
                v_match = version_pattern.search(line)
                if v_match and not found_version:
                    found_version = v_match.group(1)

                if "incomplete-docs.md" in line:
                    incomplete_refs.append((rel_path, line_no, line.strip()))

        if found_version:
            file_ver, _ = parse_version_string(found_version)
            if file_ver and file_ver < target_ver:
                outdated_files.append((rel_path, found_version))

    # Get the current date formatted as YYYY-MM-DD
    current_date = datetime.now().strftime("%Y-%m-%d")

    # Build formatted stats markdown block without emojis
    stats_lines = [
        "## **Stats**",
        f"*(Automatically updated against target version: `{clean_target}`)*",
        f"*(Last updated: {current_date})*",
        "",  # Blank line for correct markdown formatting
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


def update_index_md(
        docs_folder: str = "docs",
        latest_version_input: str = "v1.0.0",
        ignore_list: list = None,
):
    new_stats_content = generate_docs_stats(
        docs_folder, latest_version_input, ignore_list
    )
    if not new_stats_content:
        return

    index_path = Path(docs_folder) / "index.md"
    if not index_path.exists():
        print(f"Error: {index_path} does not exist.")
        return

    with open(index_path, "r", encoding="utf-8", errors="ignore") as f:
        content = f.read()

    # Robust regex to cut off everything from '## Stats' onwards
    base_content = re.split(
        r"\n?#+\s*\*+\s*stats\b", content, flags=re.IGNORECASE
    )[0].rstrip()

    updated_content = f"{base_content}\n\n{new_stats_content}\n"

    with open(index_path, "w", encoding="utf-8") as f:
        f.write(updated_content)

    print(
        f"Successfully updated `{index_path}` with latest documentation"
        " statistics."
    )


if __name__ == "__main__":
    target_version_path = Path("TARGET_VERSION.txt")

    if target_version_path.exists():
        with open(target_version_path, "r", encoding="utf-8") as f:
            latest_ver_input = f.read().strip()
    else:
        latest_ver_input = "v1.0.0"
        print(
            "Warning: 'TARGET_VERSION.txt' not found. Defaulting to"
            f" '{latest_ver_input}'."
        )

    files_to_ignore = ["index.md", "incomplete-docs.md"]
    update_index_md("docs", latest_ver_input, ignore_list=files_to_ignore)