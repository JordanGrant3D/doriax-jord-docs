# hooks/stats_hook.py
import subprocess
import sys

def on_pre_build(config, **kwargs):
    """Runs the stats generator script automatically before MkDocs builds or serves."""

    # Run your stats script (replace 'your_stats_script.py' with your actual script filename)
    result = subprocess.run([sys.executable, "stats-generator.py"], capture_output=True, text=True)

    if result.returncode != 0:
        print(result.stdout)
        print(result.stderr, file=sys.stderr)
        raise RuntimeError("❌ Stats generator script failed during MkDocs pre-build!")

    if result.stdout.strip():
        print(result.stdout)