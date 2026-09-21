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

## [File](file.md).File()

Constructs a `File`. The default constructor leaves the handle null until `open` is called, the `FILE*` overload wraps an already-open C file pointer, and the filename overload opens `aFilename` for reading (or for writing when `write` is `true`). The CharacterController save script opens `saves/tutorial_slot0.json` directly with the filename constructor.

```cpp
File();
File(FILE *fp);
File(const char *aFilename, bool write = false);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-constructor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-constructor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
