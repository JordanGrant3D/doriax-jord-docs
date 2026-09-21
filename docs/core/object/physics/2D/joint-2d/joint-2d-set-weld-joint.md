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

## [Joint2D](joint-2d.md).setWeldJoint()

Locks two bodies together so they move as one rigid piece. Use it to bolt armor, hats, or cargo onto a ragdoll limb or mount.

```cpp
void setWeldJoint(Entity bodyA, Entity bodyB, Vector2 worldAnchor);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-weld-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-weld-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
