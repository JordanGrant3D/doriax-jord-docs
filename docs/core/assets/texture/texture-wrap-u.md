[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).wrapU

Horizontal wrapping mode for UVs outside `[0, 1]`. `REPEAT` tiles the CharacterController sprite sheet frames horizontally; `CLAMP_TO_EDGE` stops edge bleeding on single-sprite materials.

```cpp
void setWrapU(TextureWrap wrapU);
TextureWrap getWrapU() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-wrap-u.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-wrap-u.h"
```
