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

## [TextureData](texture-data.md).svgScale

Rasterization scale for vector (`.svg`) sources: `2.0` doubles the intrinsic resolution. Set it before loading the CharacterController HUD icon; it has no effect on raster sprite sheets. Default `1.0`.

```cpp
void setSVGScale(float svgScale);
float getSVGScale() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-svg-scale.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-svg-scale.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
