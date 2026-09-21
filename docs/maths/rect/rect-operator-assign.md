[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Rect
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Rect](rect.md).operator=(const Rect&) / operator=(const Vector4&)

Copy-assign duplicates position and size; `Vector4`-assign unpacks `(x, y, z=width, w=height)`. Returns `*this` so assignments chain.

```cpp
Rect& operator=(const Rect& t);
Rect& operator=(const Vector4& v);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-operator-assign.h"
```
