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

## [ResourceBuildInfo](resource-build-info.md).startTime

Steady-clock moment the build started. Subtract it from `std::chrono::steady_clock::now()` to get the build's age; loading screens use the age to flag stalled warmup bars that exceed a timeout. [ResourceProgress::getAllActiveBuilds](../resource-progress/resource-progress-get-all-active-builds.md) sorts snapshots most-recent-first using this field.

```cpp
std::chrono::steady_clock::time_point startTime;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-start-time.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-start-time.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
