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

## [TextureRender](texture-render.md).getD3D11Handler()

Direct3D 11 resource-view handle for native interop on Windows builds streaming sprite sheets.

```cpp
const void* getD3D11Handler() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-get-d3d11-handler.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-get-d3d11-handler.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
