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

## [Vector4](vector4.md).UNIT_SCALE

Shorthand for writing `Vector4(1, 1, 1, 1)`. Equal weight on all four blend channels, or opaque white as an RGBA colour.

```cpp
static const Vector4 UNIT_SCALE;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-scale.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-scale.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
