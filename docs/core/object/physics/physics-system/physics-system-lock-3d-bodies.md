[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
