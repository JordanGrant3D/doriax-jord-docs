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

## [TextureRender](texture-render.md).createTexture()

Uploads raw face bytes as a GPU texture with explicit sampling state. Used for runtime-generated CharacterController skins (label shows up in GPU captures).

```cpp
bool createTexture(
        const std::string& label, int width, int height,
        ColorFormat colorFormat, TextureType type, int numFaces, void* data[6], size_t size[6],
        TextureFilter minFilter, TextureFilter magFilter, TextureWrap wrapU, TextureWrap wrapV);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-create-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-create-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
