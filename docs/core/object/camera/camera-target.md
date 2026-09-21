[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
