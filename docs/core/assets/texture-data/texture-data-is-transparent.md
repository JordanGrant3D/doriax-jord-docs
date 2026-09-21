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

## [TextureData](texture-data.md).isTransparent()

Returns `true` when any texel has alpha below `1.0`. Unlike `hasAlpha()` (channel presence), this inspects values to decide the transparent render pass.

```cpp
bool isTransparent();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-data/texture-data-is-transparent.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-data/texture-data-is-transparent.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
