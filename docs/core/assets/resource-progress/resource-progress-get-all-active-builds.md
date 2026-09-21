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

## [ResourceProgress](resource-progress.md).getAllActiveBuilds()

Returns a copy of every active [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshot, sorted most-recent-first by [startTime](../resource-build-info/resource-build-info-start-time.md). Loading screens iterate it to draw one warmup bar per asset.

```cpp
static std::vector<ResourceBuildInfo> getAllActiveBuilds();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-all-active-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-all-active-builds.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
