---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [AABB](aabb.md).intersects()

Overlap tests against other volumes or a point. Use them for trigger zones: build an AABB around the zone and test the player's bounds against it each frame.

```cpp
bool intersects(const AABB& b2) const;
bool intersects(const OBB& obb) const;
bool intersects(const Plane& p) const;
bool intersects(const Sphere& sp) const;
bool intersects(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-intersects.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-intersects.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
