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

## [PhysicsSystem](physics-system.md).pointsToMeterScale2D

Pixels (points) per physics meter for the 2D world. The CharacterController sets `64` for chunky sprites and `32` for pixel-art stealth maps so Box2D stays in stable unit ranges.

```cpp
float getPointsToMeterScale2D() const;
void setPointsToMeterScale2D(float pointsToMeterScale2D);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/physics-system/physics-system-points-to-meter-scale-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/physics-system/physics-system-points-to-meter-scale-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
