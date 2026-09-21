---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
