[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureData](texture-data.md).resizeToSquare()

Resamples the buffer into a square, used for minimap tile thumbnails that must be NxN.

```cpp
void resizeToSquare();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-resize-to-square.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-resize-to-square.h"
```
