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
