[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).dotProduct(const Vector3& v)

Scalar dot product: `x*v.x + y*v.y + z*v.z`. Positive when vectors point the same way, zero when perpendicular, negative when opposed. Used for facing checks.

```cpp
float dotProduct(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-dot-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-dot-product.h"
```
