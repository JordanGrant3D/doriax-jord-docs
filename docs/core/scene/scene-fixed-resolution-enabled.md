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

## [Scene](scene.md).setFixedResolutionEnabled()

Renders the main camera into an internal fixed-size buffer and upscales the result when enabled, and `isFixedResolutionEnabled()` reports whether it is on. Toggling at runtime rebuilds the scene render pipelines.

```cpp
void setFixedResolutionEnabled(bool fixedResolutionEnabled);
bool isFixedResolutionEnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-enabled.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
