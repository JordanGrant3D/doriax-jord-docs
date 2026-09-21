[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setGravity3D()

Sets the gravity of the 3D physics world in meters per second squared, affecting every dynamic 3D body scaled by its gravity factor, and `getGravity3D()` returns it. A CharacterController script switches it per-planet for low-gravity zones.

```cpp
void setGravity3D(Vector3 gravity);
void setGravity3D(float x, float y, float z);
Vector3 getGravity3D() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-gravity-3d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-gravity-3d.h"
```
