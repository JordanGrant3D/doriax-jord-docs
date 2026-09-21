###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator==(const Vector4& rkVector)

Component-wise equality: `true` only when `x`, `y`, `z` and `w` all match. Detects that a blend set has exactly reached its target pose.

```cpp
bool operator==(const Vector4& rkVector) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-equal.h"
```
