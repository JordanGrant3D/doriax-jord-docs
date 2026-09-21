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

## [TextureData](texture-data.md).hasSvgExtension()

Static helper reporting whether a filename ends in `.svg`. The loading screen uses it to route HUD icons through the vector rasterizer instead of the sprite-sheet path.

```cpp
static bool hasSvgExtension(const char* filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-has-svg-extension.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-has-svg-extension.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
