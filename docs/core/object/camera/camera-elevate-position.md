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

## [Camera](camera.md).elevatePosition()

Moves the camera position along a sphere centered at the target by `angle` degrees. It raises or lowers an orbit chase camera without changing its distance.

```cpp
void elevatePosition(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-elevate-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-elevate-position.h"
```
