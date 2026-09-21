---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).this[size_t i]

Access a component by index (`0` = x, `1` = y, `2` = z, `3` = w). The `const` overload returns a copy for reading; the non-`const` overload returns a reference so you can drive a blend channel by animation state index.

```cpp
float operator[](const size_t i) const;
float& operator[](const size_t i);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-operator-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-operator-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
