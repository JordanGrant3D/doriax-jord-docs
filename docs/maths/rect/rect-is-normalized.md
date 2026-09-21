###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).isNormalized()

Returns `true` when `x`, `y`, `width` and `height` all sit in `[0, 1]`. Validates UV rects before sampling a texture atlas.

```cpp
bool isNormalized() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-is-normalized.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-is-normalized.h"
```
