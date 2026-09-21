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

## [Scene](scene.md).setSSAOIntensity()

Sets the strength of screen-space ambient occlusion, applied as an exponent on the occlusion factor, and `getSSAOIntensity()` returns it. Higher values darken occluded areas more.

```cpp
void setSSAOIntensity(float intensity);
float getSSAOIntensity() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-intensity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-intensity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
