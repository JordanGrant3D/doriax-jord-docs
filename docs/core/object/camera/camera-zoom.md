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

## [Camera](camera.md).zoom()

Moves the camera toward the target by `distance` units without moving the target itself. Positive values zoom in, negative zoom out — ideal for chase zoom limits.

```cpp
void zoom(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-zoom.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-zoom.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
