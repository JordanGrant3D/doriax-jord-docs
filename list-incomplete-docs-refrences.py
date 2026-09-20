from pathlib import Path

def find_md_references(folder_path: str, target_ref: str = "incomplete-docs.md"):
    folder = Path(folder_path)
    if not folder.exists() or not folder.is_dir():
        print(f"Error: Directory '{folder_path}' does not exist.")
        return

    matches = []

    # Iterate through all .md files in the folder and subdirectories
    for md_file in folder.rglob("*.md"):
        try:
            with open(md_file, "r", encoding="utf-8", errors="ignore") as f:
                for line_num, line in enumerate(f, start=1):
                    if target_ref in line:
                        matches.append((md_file, line_num, line.strip()))
        except Exception as e:
            print(f"Could not read {md_file}: {e}")

    # Display results
    print("\n" + "=" * 60)
    print(f"REFERENCES TO '{target_ref}'")
    print("=" * 60)

    if not matches:
        print(f"\n✅ No references to '{target_ref}' found.")
        return

    current_file = None
    for file_path, line_no, content in matches:
        if file_path != current_file:
            print(f"\n📄 File: {file_path}")
            current_file = file_path
        print(f"   Line {line_no}: {content}")

    print(f"\nTotal references found: {len(matches)}")

if __name__ == "__main__":
    dir_input = input("Enter path to markdown folder [default: .]: ").strip() or "."
    find_md_references(dir_input, "incomplete-docs.md")