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

## [Quaternion](quaternion.md).xAxis()

Returns the rotated local X (right) axis. Yaw a `UNIT_X` through the facing without building any matrix.

```cpp
Vector3 xAxis() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-x-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-x-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
