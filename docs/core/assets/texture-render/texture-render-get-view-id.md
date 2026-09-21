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

## [TextureRender](texture-render.md).getViewId()

Backend view identifier used with `isViewValid()` to confirm the minimap texture survived a device reset.

```cpp
uint32_t getViewId() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-get-view-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-get-view-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
