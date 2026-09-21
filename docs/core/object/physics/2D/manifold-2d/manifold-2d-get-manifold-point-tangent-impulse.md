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

## [Manifold2D](manifold-2d.md).getManifoldPointTangentImpulse()

Friction impulse at point `index`. It stays high while the character scrapes along a wall.

```cpp
float getManifoldPointTangentImpulse(int32_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-tangent-impulse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/manifold-2d/manifold-2d-get-manifold-point-tangent-impulse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
