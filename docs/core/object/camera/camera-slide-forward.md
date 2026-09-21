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

## [Camera](camera.md).slideForward()

Moves the camera and its target along the local forward vector by `distance` units. Unlike `zoom`, the target travels too, so the chase framing is preserved.

```cpp
void slideForward(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-slide-forward.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-slide-forward.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
