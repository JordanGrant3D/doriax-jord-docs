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

## [Camera](camera.md).elevateView()

Pitches the look direction up or down by `angle` degrees while the position stays fixed. Vertical-look chase controls use it to glance up or down the path.

```cpp
void elevateView(float angle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-elevate-view.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-elevate-view.h"
```
