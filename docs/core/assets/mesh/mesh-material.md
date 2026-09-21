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

## [Mesh](mesh.md).material

Full PBR [**Material**](../material/material.md) of the character mesh, or of one armor submesh by index. A CharacterController script swaps the whole-body material for a metallic tournament outfit, and swaps only the chestplate submesh material for seasonal armor trims.

```cpp
void setMaterial(const Material& material);
Material getMaterial() const;
void setMaterial(unsigned int submesh, const Material& material);
Material getMaterial(unsigned int submesh) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-material.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-material.h"
```
