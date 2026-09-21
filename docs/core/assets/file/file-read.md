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

## [File](file.md).read()

Reads up to `aBytes` into `aDst` and returns the number of bytes actually read. The CharacterController tutorial reader uses it to load a fixed-size state block from `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int read(unsigned char *aDst, unsigned int aBytes);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-read.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-read.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
