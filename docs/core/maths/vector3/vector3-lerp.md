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

## [Vector3](vector3.md).lerp(const Vector3& target, float t)

Linear interpolation: `*this + (target - *this) * t`. `t = 0` returns the start, `t = 1` returns the target. Use small `t` values for smoothed camera follow.

```cpp
Vector3 lerp(const Vector3& target, float t) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/vector3/vector3-lerp.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/vector3/vector3-lerp.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
