###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).normalize()

Normalizes in place to unit length and returns `*this`. Zero vectors are left unchanged. Apply after the deadzone check, as CharacterController does.

```cpp
Vector2& normalize();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-normalize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-normalize.h"
```
