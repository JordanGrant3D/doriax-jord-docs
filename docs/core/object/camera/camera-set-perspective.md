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

## [Camera](camera.md).setPerspective()

Configures perspective (3D) projection: `yfov` is the vertical field-of-view in degrees, `aspect` the width-to-height ratio, plus near and far clip distances. Also disables `autoResize`.

```cpp
void setPerspective(float yfov, float aspect, float nearValue, float farValue);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-set-perspective.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-set-perspective.h"
```
