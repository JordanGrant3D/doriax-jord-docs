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

## [OBB](obb.md).distance() / squaredDistance()

Distance from a point to the nearest surface of this box. Returns `0` if the point is inside. Use `squaredDistance()` when comparing ranges to avoid the `sqrt` cost.

```cpp
float squaredDistance(const Vector3& point) const;
float distance(const Vector3& point) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-distance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
