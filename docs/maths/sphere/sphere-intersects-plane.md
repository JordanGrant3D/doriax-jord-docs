[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).intersects(const Plane& plane)

Returns `true` when the sphere touches a plane, e.g. the character's bounding sphere meeting the ground plane while falling.

```cpp
bool intersects(const Plane& plane) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-intersects-plane.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-intersects-plane.h"
```
