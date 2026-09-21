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

## [Scene](scene.md).getCamera()

Returns the entity handle of the currently active camera. A CharacterController chase script wraps it (`Camera(getScene(), getScene()->getCamera())`) so the follow rig always resolves against the live camera.

```cpp
Entity getCamera() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-get-camera.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-get-camera.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
