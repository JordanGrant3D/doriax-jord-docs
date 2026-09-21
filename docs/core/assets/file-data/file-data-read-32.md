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

## [FileData](file-data.md).read32()

Reads four bytes and advances the cursor by four. The CharacterController replay parser uses it to read checkpoint timestamps from `replays/tutorial_run0.bin`.

```cpp
unsigned int read32();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read-32.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read-32.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
