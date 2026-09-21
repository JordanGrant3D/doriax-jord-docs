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

## [FileData](file-data.md).read16()

Reads two bytes and advances the cursor by two. The CharacterController replay parser uses it to read frame lengths from `replays/tutorial_run0.bin`.

```cpp
unsigned int read16();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read-16.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read-16.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
