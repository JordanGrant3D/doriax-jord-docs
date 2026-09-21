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

## [Texture](texture.md).wrapV

Vertical wrapping mode for UVs outside `[0, 1]`. Use `CLAMP_TO_EDGE` on the render-to-texture minimap so the border pixels stretch instead of tiling.

```cpp
void setWrapV(TextureWrap wrapV);
TextureWrap getWrapV() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-wrap-v.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-wrap-v.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
