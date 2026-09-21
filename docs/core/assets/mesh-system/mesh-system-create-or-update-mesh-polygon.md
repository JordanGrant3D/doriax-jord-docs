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

## [MeshSystem](mesh-system.md).createOrUpdateMeshPolygon

Rebuilds an emblem polygon mesh from its vertices. A CharacterController script forces a badge rebuild after adding the championship star, checking the polygon count result.

```cpp
bool createOrUpdateMeshPolygon(MeshPolygonComponent& polygon, MeshComponent& mesh);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-mesh-polygon.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-mesh-polygon.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
