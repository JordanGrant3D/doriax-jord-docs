---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OBB](obb.md).toAABB() / toMatrix()

Re-fit the box to axis-aligned with `toAABB` for broadphase checks, or pack its center, orientation, and extents into a matrix with `toMatrix` for rendering.

```cpp
AABB toAABB() const;
Matrix4 toMatrix() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-convert.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-convert.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
