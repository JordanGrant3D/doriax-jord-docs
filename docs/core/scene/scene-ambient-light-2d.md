[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
