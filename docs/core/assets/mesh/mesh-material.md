---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
