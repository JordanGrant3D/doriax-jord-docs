[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Material
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Material](material.md).occlusionTexture

Baked ambient-occlusion [Texture](../texture/texture.md): the red channel darkens crevices that receive less indirect light, at a fixed scale of `1.0`. CharacterController assigns it so armor seams stay shaded under any team tint.

```cpp
Texture occlusionTexture;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/material/material-occlusion-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/material/material-occlusion-texture.h"
```
