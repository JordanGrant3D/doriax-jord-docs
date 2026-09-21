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

## [Matrix4](matrix4.md).rotateXMatrix(angle)

Static pitch rotation about the X axis (angle in engine-default units). Nods a camera rig up and down.

```cpp
static Matrix4 rotateXMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-rotate-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-rotate-x.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
