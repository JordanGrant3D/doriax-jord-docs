###### version: 0.7.1
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).makeCeil(const Vector3& v)

Component-wise maximum: each component becomes `max(component, v.component)`. Expands a bounds vector outward.

```cpp
void makeCeil(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-make-ceil.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-make-ceil.h"
```
