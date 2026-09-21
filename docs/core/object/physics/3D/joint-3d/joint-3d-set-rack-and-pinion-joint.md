[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Joint3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Joint3D](joint-3d.md).setRackAndPinionJoint()

Couples a hinge to a slider like a rack and pinion, turning rotation into lift. Use it for portcullis gates the CharacterController cranks open.

```cpp
void setRackAndPinionJoint(Entity bodyA, Entity bodyB, Entity hinge, Entity slider, int numTeethRack, int numTeethGear, int rackLength);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-rack-and-pinion-joint.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/joint-3d/joint-3d-set-rack-and-pinion-joint.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
