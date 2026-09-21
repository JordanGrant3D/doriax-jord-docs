---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Joint3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint3D](joint-3d.md).setPointJoint()

Creates a ball-and-socket pivot with free rotation in all directions. Use it for ragdoll shoulders and hips or wrecking-ball chains.

```cpp
void setPointJoint(Entity bodyA, Entity bodyB, Vector3 worldAnchor);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-point-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-point-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
