###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).ZERO

Shorthand for writing `Vector4(0, 0, 0, 0)`. Clears a four-way animation blend weight set (idle, walk, jump, waiting) before re-weighting each frame.

```cpp
static const Vector4 ZERO;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-zero.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-zero.h"
```
