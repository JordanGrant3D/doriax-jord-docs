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

## [Quaternion](quaternion.md).fromAngle(angle)

Rebuilds as a Z-axis spin (`fromAngleAxis(angle, (0,0,1))`). Spins HUD compass needles and 2D overlays.

```cpp
void fromAngle(const float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-from-angle.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-from-angle.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
