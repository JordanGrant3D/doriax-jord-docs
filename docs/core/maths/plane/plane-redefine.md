---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
