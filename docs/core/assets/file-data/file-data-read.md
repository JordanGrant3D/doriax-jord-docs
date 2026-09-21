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
