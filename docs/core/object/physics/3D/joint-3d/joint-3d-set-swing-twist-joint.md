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

## [Joint3D](joint-3d.md).setSwingTwistJoint()

Separates swing (cone) limits from twist limits for anatomical joints. Use it for ragdoll shoulders and hips so limbs bend naturally without over-rotating.

```cpp
void setSwingTwistJoint(Entity bodyA, Entity bodyB, Vector3 worldAnchor, Vector3 twistAxis, Vector3 planeAxis, float normalHalfConeAngle, float planeHalfConeAngle, float twistMinAngle, float twistMaxAngle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-swing-twist-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-swing-twist-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
