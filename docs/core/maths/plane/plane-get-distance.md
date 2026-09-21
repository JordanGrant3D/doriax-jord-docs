[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Plane
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Plane](plane.md).getDistance(const Vector3& rkPoint)

Signed distance from the plane to a point: `normal.dotProduct(rkPoint) + d`. Positive means above the floor (normal side). Replaces CharacterController's `velocity.y` trick with a true height-above-ground landing test.

```cpp
float getDistance(const Vector3& rkPoint) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-get-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-get-distance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
