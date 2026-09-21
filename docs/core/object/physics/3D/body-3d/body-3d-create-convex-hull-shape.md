---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).createConvexHullShape()

Creates a convex hull from the entity mesh or explicit vertices. The mesh must be convex; Jolt computes the hull automatically.

```cpp
int createConvexHullShape();
int createConvexHullShape(std::vector<Vector3> vertices);
int createConvexHullShape(Vector3 position, Quaternion rotation, std::vector<Vector3> vertices);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-convex-hull-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-convex-hull-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
