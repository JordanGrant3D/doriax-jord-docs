[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
