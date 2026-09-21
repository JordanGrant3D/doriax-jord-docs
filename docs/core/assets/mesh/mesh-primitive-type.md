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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
