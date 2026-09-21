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

## [Scene](scene.md).setSSRIntensity()

Sets the overall screen-space reflection strength multiplier applied in the composite, and `getSSRIntensity()` returns it. A CharacterController script fades it down in dark interiors.

```cpp
void setSSRIntensity(float intensity);
float getSSRIntensity() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-intensity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-intensity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
