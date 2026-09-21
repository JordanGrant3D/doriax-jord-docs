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

## [FileData](file-data.md).~FileData()

Virtual destructor. Concrete streams created with `newFile` are released through it. The CharacterController config script deletes its `saves/tutorial_config.json` stream through a `FileData*` pointer.

```cpp
virtual ~FileData();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-destructor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-destructor.h"
```
