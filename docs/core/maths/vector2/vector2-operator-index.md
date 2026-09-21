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

## [Vector2](vector2.md).this[size_t i]

Access a component by index (`0` = x, `1` = y). The `const` overload returns a copy for reading; the non-`const` overload returns a reference so you can write `v[1] = 5.0f`.

```cpp
float operator[](const size_t i) const;
float& operator[](const size_t i);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector2/vector2-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector2/vector2-operator-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
