[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).rotateMatrix(angle, axis) / rotateMatrix(azimuth, elevation)

Static builders: axis-angle rotation (angle converted from engine-default units), or yaw/pitch from azimuth/elevation radians. Compose full look orientations in one call.

```cpp
static Matrix4 rotateMatrix(const float angle, const Vector3& axis);
static Matrix4 rotateMatrix(const float azimuth, const float elevation);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-rotate-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-rotate-matrix.h"
```
