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

## [AABB](aabb.md).getCorner() / getCorners()

Reads box corners: `getCorner()` returns a single corner selected by [CornerEnum](aabb-corner-enum.md), while `getCorners()` returns a pointer to all 8 corners.

```cpp
Vector3 getCorner(CornerEnum cornerToGet) const;
const Vector3* getCorners(void) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-corners.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-corners.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
