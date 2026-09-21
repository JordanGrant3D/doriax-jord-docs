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

## [FileData](file-data.md).write()

Writes `aBytes` from `aSrc` and returns the number of bytes actually written. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController save script uses it to persist binary checkpoints to `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int write(unsigned char *aSrc, unsigned int aBytes) = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-write.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-write.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
