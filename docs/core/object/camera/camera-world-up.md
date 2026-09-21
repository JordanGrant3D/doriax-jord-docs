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

## [Camera](camera.md).getWorldUp()

Up vector in world space. Read it to keep HUD markers or the chase boom aligned when the camera rig is tilted.

```cpp
Vector3 getWorldUp() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-world-up.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-world-up.h"
```
