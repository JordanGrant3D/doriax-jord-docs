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

## [ResourceBuildInfo](resource-build-info.md).isActive

Snapshot flag marking the build as still in flight (`true` from [ResourceProgress::startBuild](../resource-progress/resource-progress-start-build.md) until it is removed by complete or fail). Loading screens dim rows whose snapshot reports `false`.

```cpp
bool isActive = false;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-is-active.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-is-active.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
