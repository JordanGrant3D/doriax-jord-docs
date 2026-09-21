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

## [Body3D](body-3d.md).createCylinderShape()

Creates an upright cylinder collider. Less stable than capsules on uneven ground; prefer capsules for characters.

```cpp
int createCylinderShape(float halfHeight, float radius);
int createCylinderShape(Vector3 position, Quaternion rotation, float halfHeight, float radius);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-cylinder-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-cylinder-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
