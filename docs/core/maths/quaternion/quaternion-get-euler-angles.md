[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).getEulerAngles(order)

Extracts euler angles (engine-default units) for the given order, with gimbal-lock fallbacks per branch. Reads HUD yaw back out of a quaternion facing.

```cpp
Vector3 getEulerAngles(const RotationOrder& order) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-get-euler-angles.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-get-euler-angles.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
