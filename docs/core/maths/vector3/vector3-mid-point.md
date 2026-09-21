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

## [Vector3](vector3.md).midPoint(const Vector3& v)

Midpoint between two position vectors: `(x + v.x) * 0.5f` per component. Ideal for camera targets between player and objective.

```cpp
Vector3 midPoint(const Vector3& v) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-mid-point.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-mid-point.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
