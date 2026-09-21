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

## [Scene](scene.md).setFixedResolutionHeight()

Sets the internal render height in pixels used when fixed resolution is enabled, and `getFixedResolutionHeight()` returns it. Keep the aspect ratio equal to the canvas aspect ratio to avoid non-square pixels.

```cpp
void setFixedResolutionHeight(unsigned int height);
unsigned int getFixedResolutionHeight() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-height.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-height.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
