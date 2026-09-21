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

## [Mesh](mesh.md).faceCulling

Whether back faces are culled. A CharacterController script disables culling on the cape submesh so the cloth reads correctly from both sides, while keeping culling on for the body to save fill rate.

```cpp
void setFaceCulling(bool faceCulling);
bool isFaceCulling() const;
void setFaceCulling(unsigned int submesh, bool faceCulling);
bool isFaceCulling(unsigned int submesh) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-face-culling.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-face-culling.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
