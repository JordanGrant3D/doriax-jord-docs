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

## [Rect](rect.md).setHeight(float height)

Writes the `height` field. Resizes a panel vertically without touching its position or width.

```cpp
void setHeight(float height);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-set-height.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-set-height.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
