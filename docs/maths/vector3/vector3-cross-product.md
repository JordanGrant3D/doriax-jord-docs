###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).crossProduct(const Vector3& v)

Cross product: a vector perpendicular to both inputs. `forward.crossProduct(up)` gives a strafe/right axis, as in CharacterController camera math.

```cpp
Vector3 crossProduct(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-cross-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-cross-product.h"
```
