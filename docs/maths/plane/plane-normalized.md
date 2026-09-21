###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).normalized()

Returns a normalized copy without modifying the original. Keeps the authored (possibly non-unit) plane intact for editing while measuring with the fixed copy.

```cpp
Plane normalized() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-normalized.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-normalized.h"
```
