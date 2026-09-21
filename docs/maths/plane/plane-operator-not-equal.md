###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).operator!=(const Plane& rhs)

Inequality check: `true` when `normal` or `d` differ. Retunes slope helpers only while the ground plane is actually changing.

```cpp
bool operator!=(const Plane& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-operator-not-equal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-operator-not-equal.h"
```
