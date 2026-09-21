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

## [Matrix4](matrix4.md).reflectMatrix(const Plane& plane)

Static Householder reflection across `normal·p + d == 0` (the plane is normalized internally). Renders mirror images: world points viewed through the matrix appear reflected.

```cpp
static Matrix4 reflectMatrix(const Plane& plane);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-reflect-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-reflect-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
