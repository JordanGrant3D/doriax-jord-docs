---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Joint2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint2D](joint-2d.md).setMouseJoint()

Pulls a body toward a target point with a soft spring, typically driven by the cursor. Use it to grab crates near the CharacterController or to leash a pet follower.

```cpp
void setMouseJoint(Entity bodyA, Entity bodyB, Vector2 target);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-mouse-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-mouse-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
