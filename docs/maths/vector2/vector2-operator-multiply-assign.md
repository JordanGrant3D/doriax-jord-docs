###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator*=(const Vector2&) / operator*=(float)

In-place multiplication: apply per-axis sensitivity, or scale both axes at once. Returns `*this`.

```cpp
Vector2& operator*=(const float fScalar);
Vector2& operator*=(const Vector2& rkVector);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-multiply-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-multiply-assign.h"
```
