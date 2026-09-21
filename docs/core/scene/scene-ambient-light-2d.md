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

## [Scene](scene.md).setAmbientLight2D()

Sets the ambient light for the 2D lighting path that every 2D light adds on top of, separate from the 3D global illumination. Dim it to make 2D lights visible on the player sprite.

```cpp
void setAmbientLight2D(float intensity, Vector3 color);
void setAmbientLight2D(float intensity);
void setAmbientLight2D(Vector3 color);
float getAmbientLight2DIntensity() const;
Vector3 getAmbientLight2DColor() const;
Vector3 getAmbientLight2DColorLinear() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ambient-light-2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ambient-light-2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
