---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).angle()

The body's own rotation in radians, read from and written straight to the simulation. Drive it from `onFixedUpdate` — never from the Object transform, which is discarded inside the fixed step unless refreshed with `updateTransform`. Setting it also updates the entity transform so rendering follows, and wakes the body. For continuous spinning prefer `angularVelocity` or torque so the solver can resolve collisions.

```cpp
float getAngle() const;
void setAngle(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-angle.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-angle.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
