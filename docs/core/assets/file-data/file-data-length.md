[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).length()

Returns the total stream size in bytes. Pure virtual, implemented by [**File**](../file/file.md) and `Data`. The CharacterController loading screen uses it to size the progress bar while reading `saves/tutorial_config.json`.

```cpp
virtual unsigned int length() = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-length.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
