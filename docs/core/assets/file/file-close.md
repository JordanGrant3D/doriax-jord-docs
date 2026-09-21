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

## [File](file.md).close()

Closes the file handle. The CharacterController save script calls it after the tutorial checkpoint in `saves/tutorial_slot0.json` has been flushed.

```cpp
void close();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-close.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-close.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
