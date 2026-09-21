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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
