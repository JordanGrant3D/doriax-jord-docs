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

## [Scene](scene.md).setLightState()

Controls whether the render system activates the lighting pass (`OFF` disables all lights, `ON` forces lighting, `AUTO` activates it when a light entity exists), and `getLightState()` returns the current state.

```cpp
void setLightState(LightState state);
LightState getLightState() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-light-state.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-light-state.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
