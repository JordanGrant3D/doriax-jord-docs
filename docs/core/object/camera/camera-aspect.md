[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Camera
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Camera](camera.md).aspect

Width-to-height ratio of the perspective frustum. In `autoResize` mode the engine updates it automatically; set it manually for fixed-ratio chase views.

```cpp
void setAspect(float aspect);
float getAspect() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-aspect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-aspect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
