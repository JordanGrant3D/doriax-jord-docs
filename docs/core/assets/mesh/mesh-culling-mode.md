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

## [Mesh](mesh.md).cullingMode

Which faces to cull (`BACK` by default). A CharacterController script mirrors the character mesh for a locker-room reflection and flips the culling mode so the mirrored body renders with correct winding.

```cpp
void setCullingMode(CullingMode cullingMode);
CullingMode getCullingMode() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-culling-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-culling-mode.h"
```
