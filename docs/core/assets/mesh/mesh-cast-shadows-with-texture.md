[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).castShadowsWithTexture

Whether the alpha-tested outfit texture shapes the shadow (hair cards, grilles). A CharacterController script enables it on the hair submesh so braids cast patterned shadows, and checks `isCastShadowsWithTexture` before the LOD swap.

```cpp
void setCastShadowsWithTexture(bool castShadowsWithTexture);
bool isCastShadowsWithTexture() const;
void setCastShadowsWithTexture(unsigned int submesh, bool castShadowsWithTexture);
bool isCastShadowsWithTexture(unsigned int submesh) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-cast-shadows-with-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-cast-shadows-with-texture.h"
```
