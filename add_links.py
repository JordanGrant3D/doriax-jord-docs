from pathlib import Path

def add_issue_link_to_docs(docs_dir="docs"):
    path = Path(docs_dir)
    if not path.exists():
        print(f"Directory '{docs_dir}' does not exist.")
        return

    # Message and markdown link to append
    issue_footer = "\n\n---\nFound an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).\n"

    # Find all markdown (.md) files recursively in docs/
    md_files = list(path.glob("**/*.md"))

    if not md_files:
        print(f"No markdown files found in '{docs_dir}'.")
        return

    updated_count = 0
    for file_path in md_files:
        try:
            content = file_path.read_text(encoding="utf-8")

            # Check if the link is already present to prevent duplicates
            if "https://github.com/JordanGrant3D/doriax-jord-docs/issues" in content:
                print(f"Skipped (already updated): {file_path}")
                continue

            # Append the footer to the file
            with open(file_path, "a", encoding="utf-8") as f:
                f.write(issue_footer)

            print(f"Updated: {file_path}")
            updated_count += 1
        except Exception as e:
            print(f"Error processing {file_path}: {e}")

    print(f"\nDone! Successfully updated {updated_count} markdown file(s).")

if __name__ == "__main__":
    add_issue_link_to_docs()