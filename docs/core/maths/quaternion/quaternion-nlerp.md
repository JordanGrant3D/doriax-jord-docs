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

## [Quaternion](quaternion.md).nlerp(fT, rkP, rkQ) / nlerp(fT, rkP, rkQ, shortestPath)

Static cheap blend: linear mix plus `normalize()`. The 3-argument form never flips path; the 4-argument form does when asked. Use for high-rate cosmetic tilts where slerp costs too much.

```cpp
static Quaternion nlerp(float fT, const Quaternion& rkP, const Quaternion& rkQ);
static Quaternion nlerp(float fT, const Quaternion& rkP, const Quaternion& rkQ, bool shortestPath);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-nlerp.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-nlerp.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
