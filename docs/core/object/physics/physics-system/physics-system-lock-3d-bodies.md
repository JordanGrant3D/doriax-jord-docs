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

## [PhysicsSystem](physics-system.md).lock3DBodies

Whether 3D body access takes Jolt body locks (`true` by default). Leave it on unless the CharacterController drives bodies from a worker thread; it is ignored while the world is stepping.

```cpp
void setLock3DBodies(bool lock3DBodies);
bool isLock3DBodies() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-lock-3d-bodies.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-lock-3d-bodies.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
