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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
