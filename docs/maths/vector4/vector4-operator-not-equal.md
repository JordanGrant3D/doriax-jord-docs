###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).operator!=(const Vector4& rkVector)

Component-wise inequality: `true` when any component differs. Mirrors CharacterController's `desiredAnimState != currentAnimState` check, but for blend weight sets.

```cpp
bool operator!=(const Vector4& rkVector) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-not-equal.h"
```
