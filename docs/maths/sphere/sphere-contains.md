###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).contains(const Vector3& point)

Returns `true` when the 3D point lies within the sphere's bounds. The classic pickup-magnet and point-blank hit test.

```cpp
bool contains(const Vector3& point) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-contains.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-contains.h"
```
