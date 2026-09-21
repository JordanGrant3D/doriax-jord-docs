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

## [File](file.md).flush()

Flushes buffered data to disk without closing the file. The CharacterController checkpoint script calls it right after writing `saves/tutorial_slot0.json` so progress survives a crash before `close`.

```cpp
void flush();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file/file-flush.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file/file-flush.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
