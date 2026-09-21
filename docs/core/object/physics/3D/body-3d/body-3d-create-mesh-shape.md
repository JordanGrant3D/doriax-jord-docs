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

## [Body3D](body-3d.md).createMeshShape()

Creates a static triangle-mesh collider. Mesh shapes can only be `STATIC`; use a convex hull for dynamic characters.

```cpp
int createMeshShape();
int createMeshShape(std::vector<Vector3> vertices, std::vector<uint16_t> indices);
int createMeshShape(Vector3 position, Quaternion rotation, std::vector<Vector3> vertices, std::vector<uint16_t> indices);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-mesh-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-mesh-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
