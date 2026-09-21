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

## [Camera](camera.md).screenToRay()

Converts a canvas pixel position to a world-space `Ray` for mouse picking. A chase camera uses it to turn clicks into aim rays from the current viewpoint.

```cpp
Ray screenToRay(float x, float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-screen-to-ray.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-screen-to-ray.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
