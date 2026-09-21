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

## [TextureData](texture-data.md).dataOwned

Whether this buffer owns (and frees) its pixel pointer. Clear it when the sprite-sheet pixels are borrowed from a loading-screen cache that outlives the handle.

```cpp
void setDataOwned(bool dataOwned);
bool getDataOwned() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-data-owned.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-data-owned.h"
```
