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

## [Camera](camera.md).slideUp()

Moves the camera and its target along the local up vector by `distance` units. A chase camera uses it to lift the whole rig over obstacles.

```cpp
void slideUp(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-slide-up.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-slide-up.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
