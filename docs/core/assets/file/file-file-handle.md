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

## [File](file.md).fileHandle

Underlying C file handle. It is `protected`, so scripts use it through the public methods (`open`, `read`, `write`, `seek`, `pos`, `length`, `eof`, `flush`, `close`, `getFilePtr`) rather than touching it directly. The CharacterController save script checks handle state indirectly through `open` return codes when writing `saves/tutorial_slot0.json`.

```cpp
FILE *fileHandle;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-file-handle.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-file-handle.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
