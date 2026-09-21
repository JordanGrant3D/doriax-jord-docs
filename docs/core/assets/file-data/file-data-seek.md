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

## [FileData](file-data.md).seek()

Moves the cursor to absolute byte offset `aOffset` from the start of the stream. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController replay script rewinds `replays/tutorial_run0.bin` to its header before each playback pass.

```cpp
virtual void seek(int aOffset) = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-seek.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-seek.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
