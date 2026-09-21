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

## [Vector4](vector4.md).UNIT_Y

Shorthand for writing `Vector4(0, 1, 0, 0)`. Solo weight for blend channel 1, e.g. the walk animation in a four-way blend.

```cpp
static const Vector4 UNIT_Y;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
