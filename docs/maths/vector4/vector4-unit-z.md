###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).UNIT_Z

Shorthand for writing `Vector4(0, 0, 1, 0)`. Solo weight for blend channel 2, e.g. the jump animation in a four-way blend.

```cpp
static const Vector4 UNIT_Z;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-z.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-z.h"
```
