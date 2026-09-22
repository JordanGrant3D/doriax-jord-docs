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

## [Body2D](body-2d.md).angularVelocity()

Current angular velocity in radians per second, regardless of `Engine::useDegrees`. Apply from `onFixedUpdate` so the physics step consumes it each tick. Use for scripted spinning such as wheels and hazards; prefer torque when the spin should respond to collisions and inertia.

```cpp
float getAngularVelocity() const;
void setAngularVelocity(float angularVelocity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-angular-velocity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-angular-velocity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
