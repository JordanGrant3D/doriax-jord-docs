###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).length()

Magnitude: `sqrt(x*x + y*y)`. This is the stick-deflection test behind CharacterController's `moveDeadzone` logic.

```cpp
float length() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-length.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-length.h"
```
