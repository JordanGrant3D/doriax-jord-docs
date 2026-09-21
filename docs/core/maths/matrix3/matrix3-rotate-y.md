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

## [Matrix3](matrix3.md).rotateYMatrix(angle)

Static yaw rotation about the Y axis (angle in engine-default units). Turns the character toward its move direction — the matrix twin of CharacterController's `atan2` + slerp facing.

```cpp
static Matrix3 rotateYMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-rotate-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-rotate-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
