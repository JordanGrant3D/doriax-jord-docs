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

## [Quaternion](quaternion.md).yAxis()

Returns the rotated local Y (up) axis. Checks how far a banked character tilted away from world up.

```cpp
Vector3 yAxis() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-y-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-y-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
