---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).slerp(t, q1, q2) / slerp(t, q1, q2, shortestPath)

Static spherical interpolation. The 3-argument form always takes the shortest path; the 4-argument form flips only when asked. This is CharacterController's turn: `slerp(min(spin*dt,1), current, target)`.

```cpp
static Quaternion slerp(float t, const Quaternion& q1, const Quaternion& q2);
static Quaternion slerp(float t, const Quaternion& q1, const Quaternion& q2, bool shortestPath);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-slerp.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-slerp.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
