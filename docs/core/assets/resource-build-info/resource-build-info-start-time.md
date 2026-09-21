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
