---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
PhysicsSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [PhysicsSystem](physics-system.md).getWorld2D

Returns the raw Box2D world ID for advanced 2D queries. The CharacterController uses it for a custom sight-line ray cast that complements the stealth occluders.

```cpp
b2WorldId getWorld2D() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-world-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-world-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
