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

## [PhysicsSystem](physics-system.md).loadRevoluteJoint2D

Loads a 2D revolute (hinge) joint between two bodies. The CharacterController uses it for a rotating stealth-camera arm that sweeps the corridor.

```cpp
bool loadRevoluteJoint2D(Entity entity, Joint2DComponent& joint, Entity bodyA, Entity bodyB, Vector2 anchor);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-load-revolute-joint-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-load-revolute-joint-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
