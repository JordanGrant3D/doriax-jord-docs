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

## [Rect](rect.md).getVector()

Packs the rectangle into a `Vector4(x, y, width, height)` for shader uniforms or Vector4 math. Inverse of the `Rect(const Vector4&)` constructor and `operator=(const Vector4&)`.

```cpp
Vector4 getVector();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/rect/rect-get-vector.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/rect/rect-get-vector.h"
```
