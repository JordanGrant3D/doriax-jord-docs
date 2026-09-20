###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).normalize()

Normalizes in place to unit length and returns `*this` by reference. Zero vectors are left unchanged. CharacterController calls this on `inputDir`, `camForward` and `camRight`.

```cpp
Vector3& normalize();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-normalize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-normalize.h"
```
