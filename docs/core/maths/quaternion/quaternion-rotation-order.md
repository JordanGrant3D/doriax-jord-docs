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

## [Quaternion](quaternion.md).RotationOrder

Euler application order for `fromEulerAngles` / `getEulerAngles`: `XYZ`, `XZY`, `YXZ`, `YZX`, `ZXY`, `ZYX`. CharacterController uses `YXZ` (yaw, then pitch, then roll) for the chase camera.

```cpp
enum RotationOrder { XYZ, XZY, YXZ, YZX, ZXY, ZYX };
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-rotation-order.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-rotation-order.h"
```
