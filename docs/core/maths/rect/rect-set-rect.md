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

## [Rect](rect.md).setRect(float x, float y, float width, float height) / setRect(Rect rect)

Rewrites the whole rectangle at once: either from four components or by copying another rect. Prefer it over four separate setters for atomic layout updates.

```cpp
void setRect(float x, float y, float width, float height);
void setRect(Rect rect);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-set-rect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-set-rect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
