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

## [TextureData](texture-data.md).parseSvgScalePath()

Splits the legacy `"icon.svg?svgScale=4"` form into a clean path and writes the scale to `outScale` (untouched when no suffix is present), so serialized CharacterController icon references survive a round trip.

```cpp
static std::string parseSvgScalePath(const std::string& path, float* outScale = nullptr);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-parse-svg-scale-path.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-parse-svg-scale-path.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
