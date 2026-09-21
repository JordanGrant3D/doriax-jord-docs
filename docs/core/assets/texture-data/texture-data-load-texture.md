---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureData](texture-data.md).loadTexture()

Decodes pixels from an already-opened `Data` file object (auto-detects SVG versus raster). Prefer it when the loading screen already holds the sprite-sheet file in memory.

```cpp
bool loadTexture(Data* filedata);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-load-texture.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-load-texture.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
