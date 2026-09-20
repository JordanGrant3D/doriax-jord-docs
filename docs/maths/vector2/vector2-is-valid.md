###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).isValid()

Returns `true` when both `x` and `y` are finite (`std::isfinite`). Guard mouse and gamepad readings before feeding them into yaw/pitch math.

```cpp
bool isValid() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-is-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-is-valid.h"
```
