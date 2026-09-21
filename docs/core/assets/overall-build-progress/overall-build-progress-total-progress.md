---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OverallBuildProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OverallBuildProgress](overall-build-progress.md).totalProgress

Mean fill amount across all active builds (`0.0`–`1.0`); `0.0` when nothing is in flight. Multiply by `100` for the total warmup-bar percent label. Computed by [ResourceProgress::getOverallProgress](../resource-progress/resource-progress-get-overall-progress.md).

```cpp
float totalProgress = 0.0f;  // 0.0 to 1.0
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-progress.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
