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

## [TextureRender](texture-render.md).destroyTexture()

Releases the GPU allocation behind this handle. Called when the minimap closes so the render target does not leak across level loads.

```cpp
void destroyTexture();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-destroy-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-destroy-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
