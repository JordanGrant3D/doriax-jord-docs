---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OBB](obb.md).intersects()

Intersection tests using the Separating Axis Theorem (SAT). Returns `true` if this OBB touches or overlaps the other OBB, AABB, sphere, plane, or point.

```cpp
bool intersects(const OBB& other) const;
bool intersects(const AABB& aabb) const;
bool intersects(const Sphere& sphere) const;
bool intersects(const Plane& plane) const;
bool intersects(const Vector3& point) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-intersects.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-intersects.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
