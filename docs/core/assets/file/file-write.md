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

## [File](file.md).write()

Writes `aBytes` from `aSrc`, syncs the filesystem, and returns the number of bytes actually written. The CharacterController save script uses it to persist a binary checkpoint to `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int write(unsigned char *aSrc, unsigned int aBytes);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-write.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-write.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
