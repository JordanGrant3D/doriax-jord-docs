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

## [FileData](file-data.md).writeString()

Writes the contents of `s` to the stream and returns the number of bytes written. The CharacterController save script uses it to store the tutorial checkpoint JSON in `saves/tutorial_slot0.json`.

```cpp
unsigned int writeString(const std::string& s);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-write-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-write-string.h"
```
