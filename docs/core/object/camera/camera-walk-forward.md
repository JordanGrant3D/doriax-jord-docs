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

## [Camera](camera.md).walkForward()

Moves the camera and its target forward along the walk direction by `distance` units. A chase camera uses it to dolly in toward the player while keeping the framing.

```cpp
void walkForward(float distance);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/camera/camera-walk-forward.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/camera/camera-walk-forward.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
