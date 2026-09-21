[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
