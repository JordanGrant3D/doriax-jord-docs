---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
