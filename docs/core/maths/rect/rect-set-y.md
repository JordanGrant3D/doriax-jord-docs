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

## [Rect](rect.md).setY(float y)

Writes the `y` field. Repositions the top edge without touching `x`, `width` or `height`.

```cpp
void setY(float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-set-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-set-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
