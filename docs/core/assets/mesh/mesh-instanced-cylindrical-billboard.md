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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
