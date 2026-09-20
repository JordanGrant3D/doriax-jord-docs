###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).dotProduct(const Vector2& vec)

Scalar dot product: `x*vec.x + y*vec.y`. Positive when the stick points with the reference direction, zero when perpendicular, negative when opposed.

```cpp
float dotProduct(const Vector2& vec) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-dot-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-dot-product.h"
```
