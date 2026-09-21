[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceBuildInfo
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceBuildInfo](resource-build-info.md).type

Asset kind for this build snapshot (`Shader`, `Texture`, `Model`, or `Sound`). Loading screens switch the warmup-bar icon per type; pair it with [ResourceProgress::getResourceTypeName](../resource-progress/resource-progress-get-resource-type-name.md) for the display label.

```cpp
ResourceType type;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-type.h"
```
