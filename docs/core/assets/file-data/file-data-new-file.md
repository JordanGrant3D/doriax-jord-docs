[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).newFile()

Creates the concrete stream type. The first overload returns an in-memory `Data` buffer, or a disk [**File**](../file/file.md) when `useHandle` is `true`; the second overload opens `aFilename` the same way. In a native export with resource packing enabled, a packed path still returns `Data` even when a handle was requested. The CharacterController tutorial uses it to stage `saves/tutorial_config.json` in memory before parsing.

```cpp
static FileData* newFile(bool useHandle = false);
static FileData* newFile(const char *aFilename, bool useHandle = false);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-new-file.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-new-file.h"
```
