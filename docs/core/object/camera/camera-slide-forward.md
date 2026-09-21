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

## [Camera](camera.md).slideForward()

Moves the camera and its target along the local forward vector by `distance` units. Unlike `zoom`, the target travels too, so the chase framing is preserved.

```cpp
void slideForward(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-slide-forward.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-slide-forward.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
