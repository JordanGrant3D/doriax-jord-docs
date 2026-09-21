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

## [Manifold2D](manifold-2d.md).isManifoldPointPersisted()

Whether point `index` survived from the previous step. Held points mean a sustained landing; new points mean a fresh touch.

```cpp
bool isManifoldPointPersisted(int32_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-is-manifold-point-persisted.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-is-manifold-point-persisted.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
