---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Texture
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Texture](texture.md).getRender()

Returns the backend [TextureRender](../texture-render/texture-render.md), or `fallBackTexture` when the sprite has no GPU upload yet. Feed the result into the render-to-texture minimap pipeline.

```cpp
TextureRender* getRender(TextureRender* fallBackTexture = NULL);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-render.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-render.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
