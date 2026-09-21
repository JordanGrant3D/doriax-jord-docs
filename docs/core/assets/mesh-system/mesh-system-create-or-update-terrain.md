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

## [MeshSystem](mesh-system.md).createOrUpdateTerrain

Rebuilds training-ground terrain chunks. A CharacterController script refreshes the pitch mesh after the groundskeeper raises the penalty-box mound.

```cpp
bool createOrUpdateTerrain(TerrainComponent& terrain, MeshComponent& mesh, Transform& transform);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-terrain.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-terrain.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
