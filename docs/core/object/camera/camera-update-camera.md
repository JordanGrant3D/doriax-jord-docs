[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
