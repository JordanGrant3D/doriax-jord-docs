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

## [ResourceProgress](resource-progress.md).hasActiveBuilds()

Returns `true` while at least one build is tracked. Loading screens poll this every frame to show or hide the overlay; it agrees with [OverallBuildProgress::hasActiveBuilds](../overall-build-progress/overall-build-progress-has-active-builds.md) from [getOverallProgress](resource-progress-get-overall-progress.md).

```cpp
static bool hasActiveBuilds();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-has-active-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-has-active-builds.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
