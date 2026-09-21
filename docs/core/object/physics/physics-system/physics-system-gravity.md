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

## [PhysicsSystem](physics-system.md).gravity

Combined gravity shortcut: writes both the 2D (x, y) and 3D worlds at once and reads back the 3D value. The CharacterController calls it once during world setup so jumps feel identical in both simulations.

```cpp
Vector3 getGravity() const;
void setGravity(Vector3 gravity);
void setGravity(float x, float y);
void setGravity(float x, float y, float z);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-gravity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-gravity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
