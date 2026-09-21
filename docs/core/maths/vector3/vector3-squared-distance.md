---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Vector3
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Vector3](vector3.md).squaredDistance(const Vector3& rhs)

Squared Euclidean distance without the `sqrt` in `distance()`. Compare against squared radii in hot loops such as aggro checks.

```cpp
float squaredDistance(const Vector3& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-squared-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-squared-distance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
