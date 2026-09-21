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

## [Camera](camera.md).slideUp()

Moves the camera and its target along the local up vector by `distance` units. A chase camera uses it to lift the whole rig over obstacles.

```cpp
void slideUp(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-slide-up.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-slide-up.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
