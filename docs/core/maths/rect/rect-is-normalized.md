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
