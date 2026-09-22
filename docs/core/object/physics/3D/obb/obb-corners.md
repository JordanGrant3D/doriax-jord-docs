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

## [OBB](obb.md).getCorner() / getCorners()

Reads back the world-space corner points of the box. Use `getCorner` for a single named corner and `getCorners` for the full array of 8 corners.

```cpp
Vector3 getCorner(CornerEnum cornerToGet) const;
const Vector3* getCorners() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-corners.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-corners.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
