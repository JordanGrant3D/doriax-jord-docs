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

## [Matrix4](matrix4.md).row(const unsigned int row)

Returns a row as `Vector4`. Reads the translation row out of a view matrix.

```cpp
Vector4 row(const unsigned int row) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-row.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-row.h"
```
