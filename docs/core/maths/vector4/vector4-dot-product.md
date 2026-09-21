---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).dotProduct(const Vector4& vec)

Scalar dot product: `x*vec.x + y*vec.y + z*vec.z + w*vec.w`. Measures similarity between two blend weight sets or colours.

```cpp
float dotProduct(const Vector4& vec) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-dot-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-dot-product.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
