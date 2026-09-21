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

## [Matrix4](matrix4.md).linear()

Extracts the upper-left 3x3 rotation/scale block as a [Matrix3](../matrix3/matrix3.md). Recovers the facing basis out of a full world matrix.

```cpp
Matrix3 linear() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-linear.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-linear.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
