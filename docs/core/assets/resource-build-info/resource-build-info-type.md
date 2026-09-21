---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
