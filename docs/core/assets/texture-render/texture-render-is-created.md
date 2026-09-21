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

## [TextureRender](texture-render.md).isCreated()

Returns `true` once the GPU resource exists. Gate every minimap blit on this so the first frames fall back to the loading-screen placeholder.

```cpp
bool isCreated();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-is-created.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-is-created.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
