---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).graphicBackend

The active graphics backend (`GLCORE`, `GLES3`, `D3D11`, `METAL`, `WGPU`, `VULKAN`).

```cpp
static GraphicBackend getGraphicBackend();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-graphic-backend.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-graphic-backend.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
