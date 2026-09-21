---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureRender](texture-render.md).isViewValid()

Static check that a cached view id still references a live GPU texture. Poll it after alt-tab before redrawing the minimap.

```cpp
static bool isViewValid(uint32_t viewId);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-is-view-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-is-view-valid.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
