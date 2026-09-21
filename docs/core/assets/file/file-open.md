[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [File](file.md).open()

Opens `aFilename` for reading, or for writing when `write` is `true`, resolving engine path prefixes through `FileData::getSystemPath`. Returns a `FileErrors` code (`FILEDATA_OK` on success). The CharacterController save script opens `saves/tutorial_slot0.json` for writing at the end of the tutorial level.

```cpp
unsigned int open(const char *aFilename, bool write = false);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-open.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-open.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
