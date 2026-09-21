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

## [Joint3D](joint-3d.md).setHingeJoint()

Rotates around one axis with a reference normal frame. Use it for doors the CharacterController pushes, elbows and knees on ragdolls, and drawbridges.

```cpp
void setHingeJoint(Entity bodyA, Entity bodyB, Vector3 worldAnchor, Vector3 axis, Vector3 normal);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-hinge-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-hinge-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
