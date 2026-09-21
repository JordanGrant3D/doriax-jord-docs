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

## [Scene](scene.md).setGravity2D()

Sets the gravity of the 2D physics world in meters per second squared, affecting every dynamic 2D body scaled by its gravity scale, and `getGravity2D()` returns it. A CharacterController script lowers it while gliding.

```cpp
void setGravity2D(Vector2 gravity);
void setGravity2D(float x, float y);
Vector2 getGravity2D() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-gravity-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-gravity-2d.h"
```
