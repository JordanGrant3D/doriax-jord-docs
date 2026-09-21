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

## [Quaternion](quaternion.md).fromEulerAngles(xAngle, yAngle, zAngle, order)

Rebuilds from euler angles applied in `order` (per-axis `fromAngleAxis` products). This exact call — `YXZ` with mouse pitch/yaw — builds CharacterController's `camRot`.

```cpp
void fromEulerAngles(const float xAngle, const float yAngle, const float zAngle, const RotationOrder& order);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-euler-angles.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-euler-angles.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
