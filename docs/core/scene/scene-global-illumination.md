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
