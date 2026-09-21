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

## [File](file.md).seek()

Moves the cursor to absolute byte offset `aOffset` from the start of the file. The CharacterController replay script uses it to jump back to the header of `replays/tutorial_run0.bin` before a second playback pass.

```cpp
virtual void seek(int aOffset);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-seek.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-seek.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
