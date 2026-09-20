###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).squaredLength()

Squared magnitude: `x*x + y*y` with no square root. The fast deadzone test for stick deflection.

```cpp
float squaredLength() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-squared-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-squared-length.h"
```
