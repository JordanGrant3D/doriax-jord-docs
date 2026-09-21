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

## [Matrix4](matrix4.md).operator*=(const Matrix4& m)

Concatenates another transform in place (`*this = *this * m`) and returns `*this`. Accumulates yaw then translation like a scene graph node.

```cpp
Matrix4& operator*=(const Matrix4& m);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-multiply-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-multiply-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
