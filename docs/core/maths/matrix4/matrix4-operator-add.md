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

## [Matrix4](matrix4.md).operator+(const Matrix4& m)

Row-wise matrix addition. Blends two spawn poses toward an in-between before re-orthonormalizing.

```cpp
Matrix4 operator+(const Matrix4& m) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-add.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-add.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
