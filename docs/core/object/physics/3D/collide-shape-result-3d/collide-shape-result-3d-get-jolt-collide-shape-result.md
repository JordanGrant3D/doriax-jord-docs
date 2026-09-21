---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
CollideShapeResult3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [CollideShapeResult3D](collide-shape-result-3d.md).getJoltCollideShapeResult()

Raw Jolt collide-shape result for C++ gameplay code. Reach for it when the decoded accessors below are not enough.

```cpp
const JPH::CollideShapeResult* getJoltCollideShapeResult() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-jolt-collide-shape-result.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-jolt-collide-shape-result.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
