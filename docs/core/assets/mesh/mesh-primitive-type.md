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

## [Mesh](mesh.md).primitiveType

Primitive assembly of the mesh (`TRIANGLES` for solid character bodies). A CharacterController debug view forces the scarf submesh to line primitives to inspect skinning, then restores triangles from `getPrimitiveType`.

```cpp
void setPrimitiveType(PrimitiveType primitiveType);
PrimitiveType getPrimitiveType() const;
void setPrimitiveType(unsigned int submesh, PrimitiveType primitiveType);
PrimitiveType getPrimitiveType(unsigned int submesh) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-primitive-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-primitive-type.h"
```
