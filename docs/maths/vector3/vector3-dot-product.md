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
