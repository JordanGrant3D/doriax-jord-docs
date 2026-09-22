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

## [Body2D](body-2d.md).linearVelocity()

Current velocity of the center of mass in points per second — the same units as positions, so `setLinearVelocity(Vector2(300, 0))` crosses 300 points in one second. Apply from `onFixedUpdate` so the physics step consumes it each tick. Ideal for kinematic-style movement such as platformer controllers and top-down characters, since the solver still resolves collisions.

```cpp
Vector2 getLinearVelocity() const;
void setLinearVelocity(Vector2 linearVelocity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-linear-velocity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-linear-velocity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
