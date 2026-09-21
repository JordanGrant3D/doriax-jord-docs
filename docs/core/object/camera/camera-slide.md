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

## [Camera](camera.md).slide()

Strafes the camera and its target along the local right vector by `distance` units. A chase camera uses it to dodge sideways with the player while holding the same framing.

```cpp
void slide(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-slide.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-slide.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
