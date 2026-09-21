[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix3](matrix3.md).operator-(const Matrix3& m)

Row-wise matrix subtraction. Measures how far a current orientation drifted from its tuned pose.

```cpp
Matrix3 operator-(const Matrix3& m) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix3/matrix3-operator-subtract.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix3/matrix3-operator-subtract.h"
```
