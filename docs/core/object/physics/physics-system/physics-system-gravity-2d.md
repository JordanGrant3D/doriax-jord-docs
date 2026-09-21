[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
