[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).updateCameraSize()

Recalculates the active camera's projection to match the current canvas size. Called automatically when the canvas changes; call it manually after resizing the viewport from script.

```cpp
void updateCameraSize();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-update-camera-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-update-camera-size.h"
```
