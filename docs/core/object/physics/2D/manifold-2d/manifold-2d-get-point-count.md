---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Manifold2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Manifold2D](manifold-2d.md).getPointCount()

Number of active contact points. More than one usually means a stable multi-point landing.

```cpp
int32_t getPointCount() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-point-count.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-point-count.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
