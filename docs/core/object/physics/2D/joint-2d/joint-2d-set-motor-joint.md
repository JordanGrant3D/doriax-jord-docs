[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Joint2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint2D](joint-2d.md).setMotorJoint()

Applies motor forces that move a body relative to its partner. Use it for patrol platforms that ferry the CharacterController between waypoints.

```cpp
void setMotorJoint(Entity bodyA, Entity bodyB);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-motor-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/joint-2d/joint-2d-set-motor-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
