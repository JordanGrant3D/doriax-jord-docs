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

## [Rect](rect.md).setX(float x)

Writes the `x` field. Repositions the left edge without touching `y`, `width` or `height`.

```cpp
void setX(float x);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-set-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-set-x.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
