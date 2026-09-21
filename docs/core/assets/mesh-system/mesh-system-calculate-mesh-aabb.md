---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).calculateMeshAABB

Recomputes cached mesh bounds. A CharacterController script recalculates after morphing the captain's armband so LOD checks use fresh polygon extents.

```cpp
void calculateMeshAABB(MeshComponent& mesh);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-calculate-mesh-aabb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-calculate-mesh-aabb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
