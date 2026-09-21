---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
