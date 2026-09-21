---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).getSystemPath()

Resolves engine path prefixes to real filesystem paths: `data://` maps under the user data path, `asset://` under the asset path, `lua://` under the Lua path, and `shader://` under the shader path. Absolute paths pass through unchanged, and anything else resolves under the asset path. The CharacterController tutorial maps `data://saves/tutorial_slot0.json` before opening the save.

```cpp
static std::string getSystemPath(std::string path);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-get-system-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-get-system-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
