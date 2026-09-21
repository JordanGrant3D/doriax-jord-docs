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

## [TextureRender](texture-render.md).createFramebufferTexture()

Allocates a render-target texture (the minimap color buffer), optionally with depth. Shadow-map variants feed the CharacterController blob shadow.

```cpp
bool createFramebufferTexture(
        TextureType type, bool depth, bool shadowMap, int width, int height,
        TextureFilter minFilter, TextureFilter magFilter, TextureWrap wrapU, TextureWrap wrapV,
        ColorFormat colorFormat = ColorFormat::RGBA);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-create-framebuffer-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-create-framebuffer-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
