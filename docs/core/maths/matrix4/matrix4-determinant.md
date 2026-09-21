[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Matrix4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Matrix4](matrix4.md).determinant()

Returns the 4x4 determinant: the volume scale factor. `1` for rigid poses, `0` for flattened matrices that cannot be inverted.

```cpp
float determinant() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-determinant.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-determinant.h"
```
