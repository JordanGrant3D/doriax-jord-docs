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

## [FileData](file-data.md).read8()

Reads a single byte and advances the cursor by one. The CharacterController replay parser uses it to read version tags from `replays/tutorial_run0.bin`.

```cpp
unsigned int read8();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read-8.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read-8.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
