###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator-(const Vector4&) / operator-(float) / operator-()

Vector subtraction fades one weight set out of another; scalar subtraction dims every channel; unary `-` negates all components. Free `float - Vector4` overloads also exist.

```cpp
Vector4 operator-(const Vector4& rkVector) const;
Vector4 operator-(const float rhs) const;
Vector4 operator-() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-subtract.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-subtract.h"
```
