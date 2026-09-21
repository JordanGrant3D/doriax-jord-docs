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

## [Matrix4](matrix4.md).set(const int col, const int row, const float val)

Writes a single entry (`matrix[col][row] = val`). Hand-places the translation column of a spawn matrix.

```cpp
void set(const int col, const int row, const float val);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-set.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-set.h"
```
