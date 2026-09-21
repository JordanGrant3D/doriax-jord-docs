###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).UNIT_X

Shorthand for writing `Vector4(1, 0, 0, 0)`. Solo weight for blend channel 0, e.g. the idle animation in a four-way blend.

```cpp
static const Vector4 UNIT_X;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-unit-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-unit-x.h"
```
