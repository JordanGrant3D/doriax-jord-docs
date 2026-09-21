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

## [Plane](plane.md).getSide(...)

Classifies a point, a centre/half-size box, an AABB or an OBB against the plane. Points return `POSITIVE_SIDE`, `NEGATIVE_SIDE` or `NO_SIDE`; boxes can additionally return `BOTH_SIDE` when straddling. Null boxes report `NO_SIDE`, infinite ones `BOTH_SIDE`.

```cpp
Side getSide(const Vector3& rkPoint) const;
Side getSide(const Vector3& centre, const Vector3& halfSize) const;
Side getSide(const AABB& box) const;
Side getSide(const OBB& obb) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/plane/plane-get-side.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/plane/plane-get-side.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
