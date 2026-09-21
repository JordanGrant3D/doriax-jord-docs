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

## [Matrix4](matrix4.md).rotateYMatrix(angle)

Static yaw rotation about the Y axis (angle in engine-default units). Turns characters and camera rigs — the matrix twin of CharacterController's `atan2` facing.

```cpp
static Matrix4 rotateYMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-rotate-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-rotate-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
