# Unofficial Doriax Engine Documentation

> A comprehensive API reference for C++ developers using the Doriax Engine.

---

## Overview

This repository provides a detailed API reference for every function, variable, and struct accessible in Doriax C++ code. Modeled after the [Unity Documentation](https://docs.unity.com), it focuses strictly on API specifications and practical code examples rather than "Getting Started" guides.

---

## Guidelines for Contributors

- **Target Release:** Target the **latest full stable release** of Doriax. Do not target the `main` branch.
- **Version Stamping:** Every documentation file must state the exact engine version tested (as displayed in `About Doriax`).
- **Code Examples:**
    - Each code example must include both header (`.h`) and implementation (`.cpp`) files.
    - All examples must compile and run on the latest stable build.
    - Adapt Unity-style example patterns so they make natural sense within the Doriax framework.

---

## Utility Scripts

Run the following helper scripts to verify documentation health before submitting changes:

```bash
# Check for out-of-date documentation files
python3 list-outofdate-files.py

# Check for incomplete links or broken references
python3 list-incomplete-docs-refrences.py
```

---

## Local Preview

This documentation is built using [MkDocs](https://www.mkdocs.org/).

1. Start the local preview server:
   ```bash
   mkdocs serve
   ```
2. Open your web browser and navigate to `http://127.0.0.1:8000`.