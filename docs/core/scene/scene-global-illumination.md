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

## [Scene](scene.md).setGlobalIllumination()

Sets the ambient (global illumination) light brightness and tint applied uniformly across the scene. `getGlobalIlluminationIntensity()` returns the brightness, `getGlobalIlluminationColor()` the sRGB tint, and `getGlobalIlluminationColorLinear()` the linear-space tint.

```cpp
void setGlobalIllumination(float intensity, Vector3 color);
void setGlobalIllumination(float intensity);
void setGlobalIllumination(Vector3 color);
float getGlobalIlluminationIntensity() const;
Vector3 getGlobalIlluminationColor() const;
Vector3 getGlobalIlluminationColorLinear() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-global-illumination.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-global-illumination.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
