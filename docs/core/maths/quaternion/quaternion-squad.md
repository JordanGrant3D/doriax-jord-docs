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

## [Quaternion](quaternion.md).squad(fT, rkP, rkA, rkB, rkQ)

Static cubic blend through control points `rkA`/`rkB` between `rkP` and `rkQ` (built from nested `slerp`). Smooths scripted camera sweeps between keyframed facings.

```cpp
static Quaternion squad(float fT, const Quaternion& rkP, const Quaternion& rkA, const Quaternion& rkB, const Quaternion& rkQ);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-squad.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-squad.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
