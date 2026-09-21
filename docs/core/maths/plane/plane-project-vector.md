[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).projectVector(const Vector3& p)

Projects a vector onto the plane via the `(I - n*n^T)` [Matrix3](../matrix3/matrix3.md) (built with [set](../matrix3/matrix3-set.md)). Strips the into-the-ground component of a velocity so the CharacterController character slides along slopes instead of sticking.

```cpp
Vector3 projectVector(const Vector3& p) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-project-vector.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-project-vector.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
