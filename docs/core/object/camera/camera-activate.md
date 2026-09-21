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

## [Camera](camera.md).activate()

Makes this camera the active camera in its scene, equivalent to selecting it for rendering. A chase script calls it once the follow rig is configured.

```cpp
void activate();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-activate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-activate.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
