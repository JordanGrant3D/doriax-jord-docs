###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).makeCeil(const Vector2& cmp)

Component-wise maximum: each axis becomes `max(axis, cmp.axis)`. Clamps a cursor reading up to a minimum screen corner.

```cpp
void makeCeil(const Vector2& cmp);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-make-ceil.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-make-ceil.h"
```
