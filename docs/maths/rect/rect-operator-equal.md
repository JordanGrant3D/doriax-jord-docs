###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).operator==(const Rect& t)

Equality check on all four fields. Confirms a panel finished easing exactly onto its docked layout.

```cpp
bool operator==(const Rect& t);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-operator-equal.h"
```
