###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).crossProduct(const Vector2& rkVector)

2D cross product scalar: `x * rkVector.y - y * rkVector.x`. The sign tells you which way the stick turned, which maps directly onto yaw direction.

```cpp
float crossProduct(const Vector2& rkVector) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-cross-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-cross-product.h"
```
