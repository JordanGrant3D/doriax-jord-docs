---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Sphere
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Sphere](sphere.md).intersects(const Vector3& v)

Point overload of the intersection test. Behaves exactly like `contains(point)`: `true` when the point is inside the sphere.

```cpp
bool intersects(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/sphere/sphere-intersects-point.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/sphere/sphere-intersects-point.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
