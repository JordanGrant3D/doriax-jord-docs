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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
