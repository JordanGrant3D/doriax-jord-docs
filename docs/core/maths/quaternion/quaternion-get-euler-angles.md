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

## [Quaternion](quaternion.md).getEulerAngles(order)

Extracts euler angles (engine-default units) for the given order, with gimbal-lock fallbacks per branch. Reads HUD yaw back out of a quaternion facing.

```cpp
Vector3 getEulerAngles(const RotationOrder& order) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-get-euler-angles.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-get-euler-angles.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
