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

## [Body3D](body-3d.md).createCapsuleShape()

Creates a vertical capsule (hemisphere-capped cylinder). The standard character controller shape; slides over steps cleanly.

```cpp
int createCapsuleShape(float halfHeight, float radius);
int createCapsuleShape(Vector3 position, Quaternion rotation, float halfHeight, float radius);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-capsule-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-capsule-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
