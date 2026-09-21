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

## [Matrix4](matrix4.md).rotateZMatrix(angle)

Static roll rotation about the Z axis (angle in engine-default units). Banks camera rigs into strafes.

```cpp
static Matrix4 rotateZMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-rotate-z.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-rotate-z.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
