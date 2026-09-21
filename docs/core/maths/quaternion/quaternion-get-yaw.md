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

## [Quaternion](quaternion.md).getYaw()

Extracts the yaw angle (engine-default units) from the rotation. Drives the compass readout from the live facing.

```cpp
float getYaw() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-get-yaw.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-get-yaw.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
