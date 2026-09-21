---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).motionQuality

Collision detection mode. `DISCRETE` steps normally; `LINEAR_CAST` sweeps fast bodies so they cannot tunnel through thin geometry.

```cpp
void setMotionQuality(Body3DMotionQuality motionQuality);
Body3DMotionQuality getMotionQuality() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-motion-quality.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-motion-quality.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
