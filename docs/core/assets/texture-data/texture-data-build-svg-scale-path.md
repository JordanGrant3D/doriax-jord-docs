[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
TextureData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureData](texture-data.md).buildSvgScalePath()

Appends the `?svgScale=` suffix when the scale meaningfully differs from `1.0`, otherwise returns the path unchanged. Use it when serializing hi-DPI CharacterController HUD icons.

```cpp
static std::string buildSvgScalePath(const std::string& cleanPath, float scale);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-build-svg-scale-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-build-svg-scale-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
