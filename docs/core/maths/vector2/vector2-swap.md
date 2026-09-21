---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector2
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector2](vector2.md).swap(Vector2& other)

Exchanges component values with another vector in place. Swaps look axes for portrait / rotated screens.

```cpp
void swap(Vector2& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-swap.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-swap.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
