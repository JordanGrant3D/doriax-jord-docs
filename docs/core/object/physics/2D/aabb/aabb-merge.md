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

## [AABB](aabb.md).merge()

Expands this box so it also contains another box or a single point.

```cpp
AABB& merge(const AABB& rhs);
AABB& merge(const Vector3& point);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-merge.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-merge.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
