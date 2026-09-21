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

## [Vector4](vector4.md).UNIT_W

Shorthand for writing `Vector4(0, 0, 0, 1)`. Solo weight for blend channel 3, e.g. the waiting-idle animation in a four-way blend.

```cpp
static const Vector4 UNIT_W;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-w.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-w.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
