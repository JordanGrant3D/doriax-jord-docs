###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).operator!=(const Vector2& rkVector)

Component-wise inequality: `true` when either axis differs. This is the mouse-moved test behind CharacterController's `xoffset`/`yoffset` math.

```cpp
bool operator!=(const Vector2& rkVector) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-not-equal.h"
```
