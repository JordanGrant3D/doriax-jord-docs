[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
