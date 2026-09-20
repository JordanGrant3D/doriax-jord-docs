###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).operator-()

Unary negation. Returns `Vector3(-x, -y, -z)`, flipping the direction. Useful to reverse a move vector.

```cpp
Vector3 operator-() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-negate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-negate.h"
```
