[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
