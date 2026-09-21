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

## [Joint3D](joint-3d.md).setConeJoint()

Limits a ball joint to a cone around the twist axis. Use it for ragdoll necks, wrists, and ankles where full ball rotation would look broken.

```cpp
void setConeJoint(Entity bodyA, Entity bodyB, Vector3 worldAnchor, Vector3 twistAxis);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-cone-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-cone-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
