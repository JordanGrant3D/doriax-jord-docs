###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).normal

Unit normal direction perpendicular to the plane surface. `Vector3::UNIT_Y` makes a flat ground floor; tilt it for ramps.

```cpp
Vector3 normal;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-normal.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-normal.h"
```
