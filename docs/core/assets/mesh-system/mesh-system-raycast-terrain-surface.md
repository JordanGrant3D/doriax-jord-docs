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

## [MeshSystem](mesh-system.md).raycastTerrainSurface

Raycasts a pick ray against the training-ground terrain. A CharacterController script drops the captain's marker where the coach clicks, using the returned [**Vector3**](../../../core/maths/vector3/vector3.md) world point.

```cpp
bool raycastTerrainSurface([**Ray**](../../../core/maths/ray/ray.md)& ray, TerrainComponent& terrain, Transform& transform, [**Vector3**](../../../core/maths/vector3/vector3.md)& worldPoint);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-raycast-terrain-surface.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-raycast-terrain-surface.h"
```
