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
