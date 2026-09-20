###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator-(const Vector2&) / operator-(float) / operator-()

Vector subtraction gives deltas such as `mousePos - lastMousePos` (the CharacterController look delta); scalar subtraction shifts both axes; unary `-` flips the direction. Free `float - Vector2` overloads also exist.

```cpp
Vector2 operator-(const Vector2& rkVector) const;
Vector2 operator-(const float rhs) const;
Vector2 operator-() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-subtract.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-subtract.h"
```
