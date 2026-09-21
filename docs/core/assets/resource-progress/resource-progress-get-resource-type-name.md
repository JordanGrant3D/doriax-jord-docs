---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ResourceProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceProgress](resource-progress.md).getResourceTypeName(type)

Maps a `ResourceType` to its display label (`"Shader"`, `"Texture"`, `"Model"`, `"Sound"`, or `"Resource"` for unknown values). Loading screens use it for per-type warmup-bar icons and log prefixes next to each build's [type](../resource-build-info/resource-build-info-type.md).

```cpp
static std::string getResourceTypeName(ResourceType type);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-resource-type-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-resource-type-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
