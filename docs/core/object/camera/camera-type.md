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

## [Camera](camera.md).type

Switches the projection mode (`CameraType::CAMERA_ORTHO` or `CameraType::CAMERA_PERSPECTIVE`; a new `Camera` starts as perspective). Switching type reapplies that mode's default clip planes rather than keeping the current ones.

```cpp
void setType(CameraType type);
CameraType getType() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-type.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
