---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
PhysicsSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [PhysicsSystem](physics-system.md).gravity2D

2D world gravity in m/s² (Box2D). The CharacterController tunes this per zone: floaty `(0, -9.81)` corridors versus heavy `(0, -22)` stealth shafts where guards fall fast.

```cpp
Vector2 getGravity2D() const;
void setGravity2D(Vector2 gravity);
void setGravity2D(float x, float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-gravity-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-gravity-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
