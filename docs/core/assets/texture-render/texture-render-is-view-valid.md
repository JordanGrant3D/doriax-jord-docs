[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureRender
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureRender](texture-render.md).isViewValid()

Static check that a cached view id still references a live GPU texture. Poll it after alt-tab before redrawing the minimap.

```cpp
static bool isViewValid(uint32_t viewId);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-render/texture-render-is-view-valid.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-render/texture-render-is-view-valid.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
