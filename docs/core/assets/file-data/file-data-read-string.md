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

## [FileData](file-data.md).readString()

Reads stream bytes into a string. Without arguments it reads the whole remaining stream; with `stringlen` it reads exactly that many bytes. The CharacterController tutorial uses the full form to load `saves/tutorial_config.json` and the sized form to read fixed save-slot records.

```cpp
std::string readString();
std::string readString(unsigned int stringlen);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-read-string.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-read-string.h"
```
