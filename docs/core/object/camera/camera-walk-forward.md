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

## [Camera](camera.md).walkForward()

Moves the camera and its target forward along the walk direction by `distance` units. A chase camera uses it to dolly in toward the player while keeping the framing.

```cpp
void walkForward(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-walk-forward.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-walk-forward.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
