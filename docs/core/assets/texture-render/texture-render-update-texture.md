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

## [TextureRender](texture-render.md).updateTexture()

Pushes fresh CPU bytes into a dynamic texture. Streams the latest minimap radar dots without reallocating the GPU resource.

```cpp
void updateTexture(const void* data, size_t size);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-update-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-update-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
