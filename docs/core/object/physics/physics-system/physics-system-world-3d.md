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

## [PhysicsSystem](physics-system.md).getWorld3D

Returns the raw Jolt `PhysicsSystem` pointer for advanced 3D queries. The CharacterController reads the body count each step to budget stealth AI ray casts.

```cpp
JPH::PhysicsSystem* getWorld3D();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-world-3d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-world-3d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
