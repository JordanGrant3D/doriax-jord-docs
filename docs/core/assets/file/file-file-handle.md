[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
