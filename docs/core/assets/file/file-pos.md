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

## [File](file.md).pos()

Returns the current cursor position in bytes from the start of the file. The CharacterController loading bar polls it against `length()` while streaming `saves/tutorial_slot0.json` to report progress.

```cpp
virtual unsigned int pos();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-pos.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-pos.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
