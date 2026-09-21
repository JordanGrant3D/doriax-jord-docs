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
