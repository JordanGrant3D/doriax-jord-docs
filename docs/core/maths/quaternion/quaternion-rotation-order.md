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

## [Quaternion](quaternion.md).RotationOrder

Euler application order for `fromEulerAngles` / `getEulerAngles`: `XYZ`, `XZY`, `YXZ`, `YZX`, `ZXY`, `ZYX`. CharacterController uses `YXZ` (yaw, then pitch, then roll) for the chase camera.

```cpp
enum RotationOrder { XYZ, XZY, YXZ, YZX, ZXY, ZYX };
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-rotation-order.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-rotation-order.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
