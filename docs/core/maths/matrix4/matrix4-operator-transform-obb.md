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

## [Matrix4](matrix4.md).operator*(const OBB& obb)

Transforms an OBB by the matrix (via `OBB::transform`) and returns the world-space box. Swings a blade collider with its trap.

```cpp
OBB operator*(const OBB& obb) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/matrix4/matrix4-operator-transform-obb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/matrix4/matrix4-operator-transform-obb.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
