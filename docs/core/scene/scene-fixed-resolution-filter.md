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

## [Scene](scene.md).setFixedResolutionFilter()

Sets the sampling filter used when the fixed-resolution image is upscaled to the view rect, and `getFixedResolutionFilter()` returns it. `NEAREST` keeps hard pixel edges; `LINEAR` interpolates smoothly.

```cpp
void setFixedResolutionFilter(TextureFilter filter);
TextureFilter getFixedResolutionFilter() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
