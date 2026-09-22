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

## [OBB](obb.md).enclose()

Grows the box so it contains another OBB or a point. Unlike `AABB::merge`, it returns nothing and expands the box in place.

```cpp
void enclose(const OBB& other);
void enclose(const Vector3& point);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-enclose.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-enclose.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
