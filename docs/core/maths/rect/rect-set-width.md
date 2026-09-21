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

## [Rect](rect.md).setWidth(float width)

Writes the `width` field. Resizes a panel horizontally without touching its position or height.

```cpp
void setWidth(float width);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-set-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-set-width.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
