###### version: 0.7.1
---
Vector4
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector4](vector4.md).swap(Vector4& other)

Exchanges all four components with another vector in place. Double-buffers blend weight sets for glitch-free crossfades.

```cpp
void swap(Vector4& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector4/vector4-swap.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector4/vector4-swap.h"
```
