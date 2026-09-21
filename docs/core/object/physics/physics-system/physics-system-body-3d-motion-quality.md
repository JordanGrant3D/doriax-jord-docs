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

## [PhysicsSystem](physics-system.md).getBody3DMotionQualityToJolt

Static helper mapping `Body3DMotionQuality` to Jolt motion quality. The CharacterController uses it to verify the hero projectile runs `LINEAR_CAST` so fast crossbow bolts never tunnel through stealth walls.

```cpp
static JPH::EMotionQuality getBody3DMotionQualityToJolt(Body3DMotionQuality motionQuality);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-body-3d-motion-quality.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-body-3d-motion-quality.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
