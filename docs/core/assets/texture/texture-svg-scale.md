[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
