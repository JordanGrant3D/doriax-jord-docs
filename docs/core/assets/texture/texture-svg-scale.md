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

## [Texture](texture.md).svgScale

Rasterization scale for `.svg` sources (`4.0` rasterizes a 24x24 icon as 96x96). Ignored for raster sprite sheets. Invalid values (zero or negative) snap back to `1.0`, and the scale is part of the texture identity, so one SVG at two scales yields two pool entries.

```cpp
void setSvgScale(float scale);
float getSvgScale() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture/texture-svg-scale.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture/texture-svg-scale.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
