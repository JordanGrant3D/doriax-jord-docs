###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).makeFloor(const Vector2& cmp)

Component-wise minimum: each axis becomes `min(axis, cmp.axis)`. Clamps a cursor reading down to a maximum screen corner.

```cpp
void makeFloor(const Vector2& cmp);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-make-floor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-make-floor.h"
```
