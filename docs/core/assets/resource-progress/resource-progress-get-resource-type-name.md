[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
