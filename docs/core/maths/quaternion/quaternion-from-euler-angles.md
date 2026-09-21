[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).fromEulerAngles(xAngle, yAngle, zAngle, order)

Rebuilds from euler angles applied in `order` (per-axis `fromAngleAxis` products). This exact call — `YXZ` with mouse pitch/yaw — builds CharacterController's `camRot`.

```cpp
void fromEulerAngles(const float xAngle, const float yAngle, const float zAngle, const RotationOrder& order);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-euler-angles.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-euler-angles.h"
```
