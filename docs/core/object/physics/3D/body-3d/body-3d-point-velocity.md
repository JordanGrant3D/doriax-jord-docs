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

## [Body3D](body-3d.md).getPointVelocity() / getPointVelocityCOM()

Velocity of a point on the body including angular contribution. Use it for precise impact, dragging, and footstep calculations.

```cpp
Vector3 getPointVelocity(Vector3 point) const;
Vector3 getPointVelocityCOM(Vector3 pointRelativeToCOM) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-point-velocity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-point-velocity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
