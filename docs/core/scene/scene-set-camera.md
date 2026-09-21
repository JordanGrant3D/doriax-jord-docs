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

## [Scene](scene.md).setCamera()

Sets the active camera for this scene from a `Camera` object or its underlying `Entity` handle. Only one camera can be active at a time; the entity must carry a `CameraComponent`.

```cpp
void setCamera(Camera* camera);
void setCamera(Entity camera);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-set-camera.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-set-camera.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
