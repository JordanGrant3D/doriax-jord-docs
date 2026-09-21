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

## [Body3D](body-3d.md).createTaperedCapsuleShape()

Creates a capsule with different radii at each end. Useful for stylised characters, cones, and projectiles.

```cpp
int createTaperedCapsuleShape(float halfHeight, float topRadius, float bottomRadius);
int createTaperedCapsuleShape(Vector3 position, Quaternion rotation, float halfHeight, float topRadius, float bottomRadius);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-tapered-capsule-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-tapered-capsule-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
