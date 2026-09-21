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

## [OverallBuildProgress](overall-build-progress.md).totalBuilds

Number of builds currently in flight. Loading screens show it as the resource counter (`"Warming 3 assets"`); it matches [ResourceProgress::getActiveBuildCount](../resource-progress/resource-progress-get-active-build-count.md) whenever builds are active.

```cpp
int totalBuilds = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-builds.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
