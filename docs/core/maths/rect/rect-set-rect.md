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
