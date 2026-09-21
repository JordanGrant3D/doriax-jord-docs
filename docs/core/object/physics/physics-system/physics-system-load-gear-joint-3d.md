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

## [PhysicsSystem](physics-system.md).loadGearJoint3D

Loads a 3D gear joint coupling two hinges with a teeth ratio. The CharacterController uses it for vault gears that rotate together.

```cpp
bool loadGearJoint3D(Joint3DComponent& joint, Entity bodyA, Entity bodyB, Entity hingeA, Entity hingeB, int numTeethGearA, int numTeethGearB);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-load-gear-joint-3d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-load-gear-joint-3d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
