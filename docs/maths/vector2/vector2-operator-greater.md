###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator>(const Vector2& rhs)

Strict greater-than on both axes (`x > rhs.x && y > rhs.y`). Use it to test whether a cursor left a screen rect at the bottom-right.

```cpp
bool operator>(const Vector2& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-greater.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-greater.h"
```
