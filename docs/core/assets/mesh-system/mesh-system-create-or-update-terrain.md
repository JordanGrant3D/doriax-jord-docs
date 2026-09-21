[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
