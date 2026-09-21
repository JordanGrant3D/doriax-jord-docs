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

## [Rect](rect.md).fitOnRect(Rect rect)

Clamps the rectangle in place so it fits inside the target: pushes `x`/`y` up to the target origin, shrinks `width`/`height` at the far edges, floors both at zero. Returns `*this`. Keeps popups inside the screen.

```cpp
Rect& fitOnRect(Rect rect);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-fit-on-rect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-fit-on-rect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
