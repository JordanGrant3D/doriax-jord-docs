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
