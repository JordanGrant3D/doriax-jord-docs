---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
