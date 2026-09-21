[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
