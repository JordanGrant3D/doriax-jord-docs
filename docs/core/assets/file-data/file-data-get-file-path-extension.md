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

## [FileData](file-data.md).getFilePathExtension()

Returns the extension of `filepath` without the dot, or an empty string when there is none. The CharacterController loader uses it to confirm `saves/tutorial_slot0.json` really is a `json` config before parsing.

```cpp
static std::string getFilePathExtension(const std::string &filepath);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-get-file-path-extension.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-get-file-path-extension.h"
```
