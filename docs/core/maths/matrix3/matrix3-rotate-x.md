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

## [Matrix3](matrix3.md).rotateXMatrix(angle)

Static pitch rotation about the X axis (angle in engine-default units). Nods the character's facing up and down.

```cpp
static Matrix3 rotateXMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-rotate-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-rotate-x.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
