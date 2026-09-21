###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).operator!=(const Rect& t)

Inequality check: `true` when any of `x`, `y`, `width` or `height` differ. Rebuilds cached layout data only while the rect is actually changing.

```cpp
bool operator!=(const Rect& t);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-operator-not-equal.h"
```
