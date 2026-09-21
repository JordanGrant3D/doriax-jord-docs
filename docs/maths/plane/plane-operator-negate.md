###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).operator-()

Flips the plane facing: returns `Plane(-normal.x, -normal.y, -normal.z, -d)`. Turns a floor into a ceiling with the same geometry.

```cpp
Plane operator-() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-operator-negate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-operator-negate.h"
```
