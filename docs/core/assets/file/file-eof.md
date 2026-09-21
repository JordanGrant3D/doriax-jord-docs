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

## [File](file.md).eof()

Whether the end of the file has been reached. Returns non-zero once a read has hit the end. The CharacterController replay script polls it while draining `replays/tutorial_run0.bin` record by record.

```cpp
virtual int eof();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-eof.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-eof.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
