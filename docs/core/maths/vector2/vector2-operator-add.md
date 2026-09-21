[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator+(const Vector2&) / operator+(float) / operator+()

Vector addition combines two look offsets; scalar addition shifts both axes (e.g. DPI padding); unary `+` returns the vector unchanged. Free `float + Vector2` overloads also exist.

```cpp
Vector2 operator+(const Vector2& rkVector) const;
Vector2 operator+(const float rhs) const;
const Vector2& operator+() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-add.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-add.h"
```
