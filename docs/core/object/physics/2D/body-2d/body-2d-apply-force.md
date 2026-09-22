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

## [Body2D](body-2d.md).applyForce()

Applies a continuous force in Newtons. `applyForce` pushes at a world-space point (adding spin); `applyForceToCenter` pushes the center of mass with no torque. Note the single-vector overload applies at the CENTER — the reverse of Body3D. Forces are cleared each fixed step, so call from `onFixedUpdate` without scaling by dt.

```cpp
void applyForce(const Vector2& force, const Vector2& point, bool wake);
void applyForceToCenter(const Vector2& force, bool wake);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-apply-force.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-apply-force.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
