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

## [Scene](scene.md).setFixedResolutionSize()

Sets the internal render width and height in pixels in one call for use with fixed resolution rendering. Prefer it over separate width/height calls when changing both, for a retro pixel-art look on the player camera.

```cpp
void setFixedResolutionSize(unsigned int width, unsigned int height);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
