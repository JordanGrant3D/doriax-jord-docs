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

## [Body3D](body-3d.md).setLinearVelocityClamped() / setAngularVelocityClamped()

Velocity setters clamped to the body's configured speed limits. Safer than raw setters for kinematic-style controllers.

```cpp
void setLinearVelocityClamped(Vector3 linearVelocity);
void setAngularVelocityClamped(Vector3 angularVelocity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-velocity-clamped.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-velocity-clamped.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
