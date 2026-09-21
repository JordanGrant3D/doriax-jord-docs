---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).getDistanceFromTarget()

Returns the distance between the camera position and the current target point. Chase zoom logic clamps against it to keep the boom inside min/max range.

```cpp
float getDistanceFromTarget() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-distance-from-target.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-distance-from-target.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
