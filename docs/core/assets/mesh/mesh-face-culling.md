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
