---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
