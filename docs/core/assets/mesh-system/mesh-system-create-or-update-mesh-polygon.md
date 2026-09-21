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
