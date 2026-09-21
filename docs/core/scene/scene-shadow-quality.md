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

## [Scene](scene.md).setShadowQuality()

Sets the PCF filter quality of 3D shadow map edges, and `getShadowQuality()` returns the current quality. Higher qualities smooth shadow edges at a higher sampling cost.

```cpp
void setShadowQuality(ShadowQuality quality);
ShadowQuality getShadowQuality() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-shadow-quality.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-shadow-quality.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
