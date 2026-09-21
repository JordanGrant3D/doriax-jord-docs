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

## [Matrix4](matrix4.md).scaleMatrix(float sf) / scaleMatrix(const Vector3& sf)

Static scale builders: uniform from one factor, or per-axis from a `Vector3`. Crouches characters or grows telegraphed zones.

```cpp
static Matrix4 scaleMatrix(const float sf);
static Matrix4 scaleMatrix(const Vector3& sf);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-scale-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-scale-matrix.h"
```
