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

## [ResourceProgress](resource-progress.md).updateProgress(id, progress)

Updates a tracked build's fill amount, clamped into `0.0`–`1.0`. Unknown `id`s are ignored. Call it as an asset converts or uploads so the warmup bar bound to that build's [ResourceBuildInfo::progress](../resource-build-info/resource-build-info-progress.md) keeps moving.

```cpp
static void updateProgress(uint64_t id, float progress);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-update-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-update-progress.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
