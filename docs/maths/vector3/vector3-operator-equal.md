###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).operator==(const Vector3& v)

Component-wise equality check. Returns `true` only when `x`, `y` and `z` are all equal. Useful for arrival checks.

```cpp
bool operator==(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-equal.h"
```
