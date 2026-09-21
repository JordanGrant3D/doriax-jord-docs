###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).merge(const Sphere& other)

Expands the sphere in place into the smallest bounding sphere enclosing both itself and `other`. Grows a patrol zone to cover a new waypoint.

```cpp
void merge(const Sphere& other);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-merge.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-merge.h"
```
