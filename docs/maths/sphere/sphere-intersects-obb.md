###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).intersects(const OBB& obb)

Returns `true` when the sphere touches an oriented box, e.g. a spinning blade's OBB entering the character's hurt zone.

```cpp
bool intersects(const OBB& obb) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-intersects-obb.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-intersects-obb.h"
```
