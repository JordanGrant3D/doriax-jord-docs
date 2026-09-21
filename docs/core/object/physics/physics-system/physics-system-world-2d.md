[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
