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

## [Quaternion](quaternion.md).fromAngleAxis(angle, rkAxis)

Rebuilds from an angle (engine-default units) and axis via the half-angle sine form. The workhorse behind every yaw, bank and turntable in these examples.

```cpp
void fromAngleAxis(const float angle, const Vector3& rkAxis);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-angle-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-angle-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
