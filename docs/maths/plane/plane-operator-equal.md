###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).operator==(const Plane& rhs)

Equality check on both `normal` and `d`. Confirms a rebuilt ground plane converged back to the authored floor.

```cpp
bool operator==(const Plane& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-operator-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-operator-equal.h"
```
