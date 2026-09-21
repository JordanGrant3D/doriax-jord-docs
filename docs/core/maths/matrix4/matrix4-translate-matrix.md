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

## [Matrix4](matrix4.md).translateMatrix(const Vector3&) / translateMatrix(float, float, float)

Static translation builders from a position vector or raw components. Places spawn points and camera rigs without touching rotation.

```cpp
static Matrix4 translateMatrix(const Vector3& position);
static Matrix4 translateMatrix(const float x, const float y, const float z);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-translate-matrix.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-translate-matrix.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
