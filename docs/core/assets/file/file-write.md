[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
File
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [File](file.md).write()

Writes `aBytes` from `aSrc`, syncs the filesystem, and returns the number of bytes actually written. The CharacterController save script uses it to persist a binary checkpoint to `saves/tutorial_slot0.json`.

```cpp
virtual unsigned int write(unsigned char *aSrc, unsigned int aBytes);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-write.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-write.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
