###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).distance(const Vector2& rhs)

Euclidean distance to another point: `(*this - rhs).length()`. Measures mouse travel in pixels between two frames.

```cpp
float distance(const Vector2& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-distance.h"
```
