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

## [Mesh](mesh.md).instancedBillboard

Whether GPU instances face the camera. A CharacterController script flags the crowd-puppet instanced mesh as a full billboard so distant fans always face the pitch.

```cpp
void setInstancedBillboard(bool billboard, bool cylindrical);
void setInstancedBillboard(bool billboard);
bool isInstancedBillboard() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-instanced-billboard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-instanced-billboard.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
