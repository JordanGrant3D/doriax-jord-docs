[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).redefine(...)

Rebuilds the plane in place: from three points via `(p1-p0).crossProduct(p2-p0)` normalized, or from a normal plus a surface point (`d = -normal.dotProduct(point)`). Builds ramp planes from level triangles.

```cpp
void redefine(const Vector3& rkPoint0, const Vector3& rkPoint1, const Vector3& rkPoint2);
void redefine(const Vector3& rkNormal, const Vector3& rkPoint);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-redefine.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-redefine.h"
```
