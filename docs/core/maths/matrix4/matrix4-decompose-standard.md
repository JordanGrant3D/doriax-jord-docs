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

## [Matrix4](matrix4.md).decomposeStandard(position, scale, rotation)

Splits the matrix into translation, per-axis scale (column lengths) and a Gram-Schmidt orthonormalized rotation quaternion. Handles mirrored (negative determinant) matrices by negating one scale axis.

```cpp
void decomposeStandard(Vector3& position, Vector3& scale, Quaternion& rotation) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-decompose-standard.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-decompose-standard.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
