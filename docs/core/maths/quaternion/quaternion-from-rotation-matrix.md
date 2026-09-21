---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).fromRotationMatrix(const Matrix3&) / fromRotationMatrix(const Matrix4&)

Rebuilds from a rotation matrix (trace-positive fast path, dominant-diagonal branches otherwise; the `Matrix4` overload converts via `linear()`). Returns `*this` for chaining.

```cpp
Quaternion& fromRotationMatrix(const Matrix3& kRot);
Quaternion& fromRotationMatrix(const Matrix4& kRot);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-rotation-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-rotation-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
