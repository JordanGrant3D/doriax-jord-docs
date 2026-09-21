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

## [FileData](file-data.md).getBaseDir()

Returns the directory portion of `filepath`, including the trailing separator, or an empty string when there is none. The CharacterController save script uses it to derive the folder holding `saves/tutorial_slot0.json`.

```cpp
static std::string getBaseDir(const std::string& filepath);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-get-base-dir.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-get-base-dir.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
