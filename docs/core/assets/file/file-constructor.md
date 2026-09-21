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
