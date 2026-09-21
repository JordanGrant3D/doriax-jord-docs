[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
PhysicsSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [PhysicsSystem](physics-system.md).loadMotorJoint2D

Loads a 2D motor joint driving one body toward another. The CharacterController uses it for a moving platform ferrying the hero across the vault gap.

```cpp
bool loadMotorJoint2D(Entity entity, Joint2DComponent& joint, Entity bodyA, Entity bodyB);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-load-motor-joint-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-load-motor-joint-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
