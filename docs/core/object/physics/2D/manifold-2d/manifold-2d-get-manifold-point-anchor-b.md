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

## [Manifold2D](manifold-2d.md).getManifoldPointAnchorB()

Anchor of contact point `index` on shape B, in local coordinates. Shows where on the ground or platform the hit landed.

```cpp
Vector2 getManifoldPointAnchorB(int32_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-anchor-b.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-anchor-b.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
