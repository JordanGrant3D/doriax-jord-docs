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

## [Mesh](mesh.md).getVerticesAABB

Tight bounds computed directly from vertex positions. A CharacterController script compares it against the stored bounds after a morph-target outfit change to detect stretched kits.

```cpp
AABB getVerticesAABB() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-vertices-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-vertices-aabb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
