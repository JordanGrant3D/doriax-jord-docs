---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
TextureLoadResult
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [TextureLoadResult](texture-load-result.md).id

Id (pool cache key) the loader resolved, e.g. the sprite-sheet path or the scale-tagged SVG id.

```cpp
std::string id;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/texture-load-result/texture-load-result-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/texture-load-result/texture-load-result-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
