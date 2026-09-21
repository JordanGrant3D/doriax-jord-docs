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

## [Camera](camera.md).updateCamera()

Forces an immediate recalculation of the view and projection matrices. The engine calls it every frame, so only call it manually when a fresh matrix is needed outside the normal update — for example right after repositioning the chase boom before a `screenToRay` pick.

```cpp
void updateCamera();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-update-camera.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-update-camera.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
