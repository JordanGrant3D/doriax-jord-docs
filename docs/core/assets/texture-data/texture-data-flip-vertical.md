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

## [TextureData](texture-data.md).flipVertical()

Flips scanlines top-to-bottom to convert between file order and GPU order. Apply it to sprite sheets authored upside-down before uploading.

```cpp
void flipVertical();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-flip-vertical.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-flip-vertical.h"
```
