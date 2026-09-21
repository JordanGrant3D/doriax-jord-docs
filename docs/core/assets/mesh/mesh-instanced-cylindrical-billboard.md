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

## [Mesh](mesh.md).instancedCylindricalBillboard

Whether GPU instances yaw toward the camera while staying upright. A CharacterController script uses it for instanced banner poles around the arena so they never tip over.

```cpp
void setInstancedCylindricalBillboard(bool cylindricalBillboard);
bool isInstancedCylindricalBillboard() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-instanced-cylindrical-billboard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-instanced-cylindrical-billboard.h"
```
