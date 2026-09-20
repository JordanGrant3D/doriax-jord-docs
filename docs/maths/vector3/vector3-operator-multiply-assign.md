###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).operator*=(float f)

In-place scalar multiplication. Scales `*this` and returns a reference to it. Handy for applying `deltaTime` or drag.

```cpp
Vector3& operator*=(float f);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-operator-multiply-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-operator-multiply-assign.h"
```
