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

## [Joint3D](joint-3d.md).setSixDOFJoint()

Exposes per-axis translation and rotation control for custom machinery. Use it for vehicle seats, crane rigs, or sprung platforms tuned around the CharacterController.

```cpp
void setSixDOFJoint(Entity bodyA, Entity bodyB, Vector3 worldAnchorOnBodyA, Vector3 worldAnchorOnBodyB, Vector3 axisX, Vector3 axisY);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-six-dof-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-six-dof-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
