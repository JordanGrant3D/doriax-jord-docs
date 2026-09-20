###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).squaredDistance(const Vector2& rhs)

Squared Euclidean distance with no `sqrt`. Compare against a squared pixel radius in hot per-frame cursor checks.

```cpp
float squaredDistance(const Vector2& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-squared-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-squared-distance.h"
```
