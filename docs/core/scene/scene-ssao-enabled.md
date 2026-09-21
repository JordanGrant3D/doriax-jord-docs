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

## [Scene](scene.md).setSSAOEnabled()

Enables screen-space ambient occlusion, which darkens ambient light in creases and contact areas, and `isSSAOEnabled()` reports whether it is on. Toggling it recompiles lit mesh shaders.

```cpp
void setSSAOEnabled(bool ssaoEnabled);
bool isSSAOEnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-enabled.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
