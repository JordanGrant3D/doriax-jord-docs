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

## [Scene](scene.md).setShadow2DQuality()

Sets the filter quality of 2D light shadows (PCF taps along the 1D polar shadow map), and `getShadow2DQuality()` returns it. More taps smooth the same penumbra width and remove banding on wide penumbras.

```cpp
void setShadow2DQuality(ShadowQuality quality);
ShadowQuality getShadow2DQuality() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-shadow-2d-quality.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-shadow-2d-quality.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
