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

## [FileData](file-data.md).read()

Reads up to `aBytes` into `aDst` and returns the number of bytes actually read. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController tutorial uses it to pull fixed-size state blocks from `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int read(unsigned char *aDst, unsigned int aBytes) = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
