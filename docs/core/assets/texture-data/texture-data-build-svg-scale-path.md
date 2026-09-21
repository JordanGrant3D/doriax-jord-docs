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
