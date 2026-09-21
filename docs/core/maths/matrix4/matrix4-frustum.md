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

## [Matrix4](matrix4.md).frustumMatrix(left, right, bottom, top, near, far)

Static off-center perspective projection. Builds portal-friendly and multi-monitor frustums that `perspectiveMatrix` cannot express.

```cpp
static Matrix4 frustumMatrix(float left, float right, float bottom, float top, float near, float far);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-frustum.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-frustum.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
