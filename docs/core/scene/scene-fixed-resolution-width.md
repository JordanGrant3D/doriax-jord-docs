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

## [Scene](scene.md).setFixedResolutionWidth()

Sets the internal render width in pixels used when fixed resolution is enabled, and `getFixedResolutionWidth()` returns it. The buffer is recreated on the next frame with no interruption.

```cpp
void setFixedResolutionWidth(unsigned int width);
unsigned int getFixedResolutionWidth() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-width.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
