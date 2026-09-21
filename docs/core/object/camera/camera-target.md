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

## [Camera](camera.md).target

Look-at point in local space. While target mode is on, the view matrix is rebuilt from the camera position toward this point every frame, so a chase camera just re-sets it to the player.

```cpp
void setTarget(Vector3 target);
void setTarget(const float x, const float y, const float z);
Vector3 getTarget() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-target.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-target.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
