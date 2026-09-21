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

## [PhysicsSystem](physics-system.md).removeBody3D

Removes the Jolt body for `entity` from the 3D world. The CharacterController calls it when the hero teleports between stealth zones to avoid ghost collisions.

```cpp
void removeBody3D(Entity entity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-remove-body-3d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-remove-body-3d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
