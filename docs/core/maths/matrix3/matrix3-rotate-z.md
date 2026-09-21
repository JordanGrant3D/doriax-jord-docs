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

## [Matrix3](matrix3.md).rotateZMatrix(angle)

Static roll rotation about the Z axis (angle in engine-default units). Banks the character model into strafes.

```cpp
static Matrix3 rotateZMatrix(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-rotate-z.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-rotate-z.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
