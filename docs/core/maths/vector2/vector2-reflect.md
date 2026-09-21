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

## [Vector2](vector2.md).reflect(const Vector2& normal)

Reflects across a surface normal: `*this - 2 * dot(normal) * normal`. Bounces a cursor velocity off a screen edge.

```cpp
Vector2 reflect(const Vector2& normal) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-reflect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-reflect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
