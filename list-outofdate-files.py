import os
import re
from pathlib import Path
from packaging import version  # Install with: pip install packaging

def parse_version_string(ver_str: str):
    """
    Strips leading 'v' or whitespace and attempts to parse into a packaging Version.
    Returns (version_object, raw_clean_string) or (None, ver_str) if invalid.
    """
    clean_str = ver_str.strip().lstrip('v')
    try:
        return version.parse(clean_str), clean_str
    except Exception:
        return None, ver_str

def check_md_versions(folder_path: str, latest_version_input: str, ignore_list: list = None):
    if ignore_list is None:
        ignore_list = []

    folder = Path(folder_path)
    if not folder.exists() or not folder.is_dir():
        print(f"Error: Directory '{folder_path}' does not exist.")
        return

    # Parse target latest version
    target_ver, clean_target = parse_version_string(latest_version_input)
    if target_ver is None:
        print(f"Error: Provided latest version '{latest_version_input}' is invalid.")
        return

    # Regex to capture the version string after '###### version:'
    version_pattern = re.compile(r"^######\s*version:\s*(v?[\w\.\-]+)", re.IGNORECASE)

    outdated_files = []
    invalid_files = []
    missing_version_files = []
    up_to_date_files = []
    ignored_files = []

    # Iterate through all .md files (including subdirectories)
    for md_file in folder.rglob("*.md"):
        # Skip checking if file name or full path matches any item in ignore_list
        if md_file.name in ignore_list or any(ignored in str(md_file) for ignored in ignore_list):
            ignored_files.append(md_file)
            continue

        found_version = None

        with open(md_file, "r", encoding="utf-8", errors="ignore") as f:
            for line in f:
                match = version_pattern.search(line)
                if match:
                    found_version = match.group(1)
                    break  # Found the version header line

        if not found_version:
            missing_version_files.append(md_file)
            continue

        file_ver, _ = parse_version_string(found_version)

        if file_ver is None:
            invalid_files.append((md_file, found_version))
        elif file_ver < target_ver:
            outdated_files.append((md_file, found_version))
        else:
            up_to_date_files.append((md_file, found_version))

    # Output Results
    print("\n" + "=" * 50)
    print(f"TARGET LATEST VERSION: {clean_target}")
    print("=" * 50)

    if ignored_files:
        print("\nIGNORED FILES:")
        for file_path in ignored_files:
            print(f"  - {file_path}")

    if invalid_files:
        print("\nx FILES WITH INVALID VERSION NUMBERS:")
        for file_path, raw_ver in invalid_files:
            print(f"  - {file_path} (Header contains invalid version: '{raw_ver}')")

    if outdated_files:
        print("\n! OUTDATED FILES:")
        for file_path, current_ver in outdated_files:
            print(f"  - {file_path} (Current: {current_ver})")

    if missing_version_files:
        print("\n? FILES MISSING VERSION HEADER:")
        for file_path in missing_version_files:
            print(f"  - {file_path}")

    if not invalid_files and not outdated_files and not missing_version_files:
        print("\n All active Markdown files are valid and up to date! :)")

if __name__ == "__main__":
    version_file = Path("TARGET_VERSION.txt")
    if not version_file.exists():
        print(f"Error: '{version_file}' does not exist.")
        exit(1)

    latest_ver_input = version_file.read_text(encoding="utf-8").strip()

    # Add exact file names, folder names, or path substrings to ignore here:
    files_to_ignore = ["/index.md", "incomplete-docs.md"]

    check_md_versions("docs/", latest_ver_input, ignore_list=files_to_ignore)