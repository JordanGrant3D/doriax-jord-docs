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

## [Scene](scene.md).setSSREnabled()

Enables screen-space reflections, which replace a surface's IBL environment reflection where the reflection ray hits on-screen geometry, and `isSSREnabled()` reports whether it is on. Toggling it reloads meshes to build the G-buffer shaders.

```cpp
void setSSREnabled(bool ssrEnabled);
bool isSSREnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-enabled.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
