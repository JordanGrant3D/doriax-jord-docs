###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).absDotProduct(const Vector3& v)

Sum of absolute component products: `|x*v.x| + |y*v.y| + |z*v.z|`. Unlike `dotProduct`, opposite directions still contribute positively. Useful for friction / alignment strength.

```cpp
float absDotProduct(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-abs-dot-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-abs-dot-product.h"
```
