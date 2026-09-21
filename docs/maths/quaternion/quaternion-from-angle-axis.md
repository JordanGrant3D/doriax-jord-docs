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

## [Quaternion](quaternion.md).fromAngleAxis(angle, rkAxis)

Rebuilds from an angle (engine-default units) and axis via the half-angle sine form. The workhorse behind every yaw, bank and turntable in these examples.

```cpp
void fromAngleAxis(const float angle, const Vector3& rkAxis);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-angle-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-angle-axis.h"
```
