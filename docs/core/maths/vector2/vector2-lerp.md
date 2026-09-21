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

## [Vector2](vector2.md).lerp(const Vector2& target, float t)

Linear interpolation: `*this + (target - *this) * t`. `t = 0` returns the start, `t = 1` returns the target. Smooths look input toward a goal.

```cpp
Vector2 lerp(const Vector2& target, float t) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-lerp.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-lerp.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
