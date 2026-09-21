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

## [Texture](texture.md).isCubeMap()

Returns `true` for six-face skybox textures. Gate reflection-probe sampling on this before reading cube faces.

```cpp
bool isCubeMap() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-is-cube-map.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-is-cube-map.h"
```
