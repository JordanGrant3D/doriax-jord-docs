###### version: 0.7.1
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).normalizeL()

Normalizes in place like `normalize()`, but returns the original length. One call yields both the aim direction and the deflection.

```cpp
float normalizeL();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-normalize-l.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-normalize-l.h"
```
