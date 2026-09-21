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

## [Camera](camera.md).autoResize

When `true` (the default), the projection is recalculated automatically when the canvas size changes. Disable it when the chase camera manages aspect or clip planes manually.

```cpp
void setAutoResize(bool autoResize);
bool isAutoResize() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-auto-resize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-auto-resize.h"
```
