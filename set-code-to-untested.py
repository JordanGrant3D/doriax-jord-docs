import re
import sys
from pathlib import Path

# Regex patterns for YAML frontmatter and status field
FRONTMATTER_PATTERN = re.compile(r"^---\s*\n(.*?)\n---", re.DOTALL)
STATUS_PATTERN = re.compile(r"^(\s*status:\s*).*", re.IGNORECASE | re.MULTILINE)


def set_docs_status(
        target_status: str = "untested",
        docs_dir_path: str = "docs",
        skip_warning: bool = False,
):
    docs_dir = Path(docs_dir_path)

    if not docs_dir.exists():
        print(f"Directory '{docs_dir}' does not exist.")
        return

    # Terminal warning prompt
    if not skip_warning:
        print("=" * 70)
        print("⚠️  WARNING: IN-PLACE DOCUMENTATION STATUS UPDATE ⚠️")
        print("=" * 70)
        print(f"Directory:     {docs_dir.resolve()}")
        print(f"Target Status: '{target_status}'")
        print("Actions:")
        print("  - Update or inject 'status:' key in YAML frontmatter headers")
        print("-" * 70)

        confirm = input("Do you want to proceed? [y/N]: ").strip().lower()
        if confirm not in ("y", "yes"):
            print("Operation aborted. No files were modified.")
            return
        print()

    md_files = list(docs_dir.rglob("*.md"))
    modified_count = 0

    for file_path in md_files:
        try:
            content = file_path.read_text(encoding="utf-8")
            modified = False

            frontmatter_match = FRONTMATTER_PATTERN.search(content)

            if frontmatter_match:
                fm_block = frontmatter_match.group(1)
                if STATUS_PATTERN.search(fm_block):
                    # Update existing status key in YAML frontmatter
                    new_fm_block = STATUS_PATTERN.sub(rf"\1{target_status}", fm_block)
                    if new_fm_block != fm_block:
                        content = content.replace(fm_block, new_fm_block, 1)
                        modified = True
                else:
                    # Append status line if missing from frontmatter
                    new_fm_block = fm_block.rstrip() + f"\nstatus: {target_status}"
                    content = content.replace(fm_block, new_fm_block, 1)
                    modified = True
            else:
                # Prepend new YAML frontmatter header if missing entirely
                new_frontmatter = f"---\nstatus: {target_status}\n---\n\n"
                content = new_frontmatter + content
                modified = True

            if modified:
                file_path.write_text(content, encoding="utf-8")
                print(f"Updated status to '{target_status}' in: {file_path}")
                modified_count += 1

        except Exception as e:
            print(f"Error processing {file_path}: {e}")

    print(f"\nDone! Successfully updated {modified_count} file(s).")


if __name__ == "__main__":
    # Pass '-y' or '--yes' via CLI arguments to bypass the warning prompt in CI/CD pipelines
    bypass_prompt = "-y" in sys.argv or "--yes" in sys.argv
    set_docs_status("untested", skip_warning=bypass_prompt)