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

## [Matrix3](matrix3.md).operator*=(const Matrix3& m)

Concatenates another rotation in place (`*this = *this * m`) and returns `*this`. Accumulates yaw then pitch exactly like camera math does.

```cpp
Matrix3& operator*=(const Matrix3& m);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-operator-multiply-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-operator-multiply-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
