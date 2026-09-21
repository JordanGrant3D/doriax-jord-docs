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

## [Vector2](vector2.md).operator<(const Vector2& rhs)

Strict less-than on both axes (`x < rhs.x && y < rhs.y`). Use it to test whether a cursor is inside the top-left of a screen rect.

```cpp
bool operator<(const Vector2& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-less.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-less.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
