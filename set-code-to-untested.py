from pathlib import Path

def uncomment_docs():
    # Define the target comment string and its uncommented replacement
    target_comment = "[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)"
    uncommented_text = "###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**"

    docs_dir = Path("docs")

    if not docs_dir.exists():
        print(f"Directory '{docs_dir}' does not exist.")
        return

    # Find all markdown files recursively in docs/ and subdirectories
    md_files = list(docs_dir.rglob("*.md"))

    modified_count = 0
    for file_path in md_files:
        try:
            content = file_path.read_text(encoding="utf-8")
            if target_comment in content:
                new_content = content.replace(target_comment, uncommented_text)
                file_path.write_text(new_content, encoding="utf-8")
                print(f"Uncommented in: {file_path}")
                modified_count += 1
        except Exception as e:
            print(f"Error reading/writing {file_path}: {e}")

    print(f"\nDone! Successfully updated {modified_count} file(s).")

if __name__ == "__main__":
    uncomment_docs()