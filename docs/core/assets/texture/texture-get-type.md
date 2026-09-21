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

## [Texture](texture.md).getType()

Returns the texture dimensionality (`TEXTURE_2D` for sprites, `TEXTURE_CUBE` for skyboxes). The minimap branches on this to pick the 2D blit path.

```cpp
TextureType getType() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-get-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-get-type.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
