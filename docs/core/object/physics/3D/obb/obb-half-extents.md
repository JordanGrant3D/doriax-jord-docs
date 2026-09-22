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

## [OBB](obb.md).getHalfExtents() / setHalfExtents()

Read or resize the half extents of the box without moving its center. Use it to grow or shrink a trigger volume when gameplay state changes.

```cpp
const Vector3& getHalfExtents() const;
void setHalfExtents(const Vector3& halfExtents);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-half-extents.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-half-extents.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
