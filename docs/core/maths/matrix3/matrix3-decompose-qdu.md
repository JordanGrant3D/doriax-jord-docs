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

## [Matrix3](matrix3.md).decomposeQDU(Matrix3& kQ, Vector3& kD, Vector3& kU)

Splits the matrix into orthogonal rotation `Q`, scale diagonal `D` and shear `U`. Recovers the clean yaw rotation out of a hand-squashed pose matrix.

```cpp
void decomposeQDU(Matrix3& kQ, Vector3& kD, Vector3& kU) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-decompose-qdu.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-decompose-qdu.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
