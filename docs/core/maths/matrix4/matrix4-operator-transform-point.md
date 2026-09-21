[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).operator*(const Vector3& v)

Transforms a position by the full matrix, then divides by `w` (perspective divide). Carries spawn offsets and camera projections back into 3D.

```cpp
Vector3 operator*(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-transform-point.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-transform-point.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
