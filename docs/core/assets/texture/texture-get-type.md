[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).getType()

Returns the texture dimensionality (`TEXTURE_2D` for sprites, `TEXTURE_CUBE` for skyboxes). The minimap branches on this to pick the 2D blit path.

```cpp
TextureType getType() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-type.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
