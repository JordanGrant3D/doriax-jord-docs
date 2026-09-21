[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
