---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).absDotProduct(const Vector2& vec)

Sum of absolute component products: `|x*vec.x| + |y*vec.y|`. Opposite stick directions still contribute positively, so it measures total input energy.

```cpp
float absDotProduct(const Vector2& vec) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-abs-dot-product.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-abs-dot-product.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
