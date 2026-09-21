---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).scaleMatrix(float sf) / scaleMatrix(const Vector3& sf)

Static scale builders: uniform from one factor, or per-axis from a `Vector3`. Crouches the character or grows telegraphed attack zones.

```cpp
static Matrix3 scaleMatrix(const float sf);
static Matrix3 scaleMatrix(const Vector3& sf);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-scale-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-scale-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
