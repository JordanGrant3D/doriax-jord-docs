[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
OverallBuildProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OverallBuildProgress](overall-build-progress.md).completedBuilds

Reserved completed-build counter. [ResourceProgress::getOverallProgress](../resource-progress/resource-progress-get-overall-progress.md) never assigns it, so snapshots read from the tracker always report `0`; derive "done" counts from [totalBuilds](overall-build-progress-total-builds.md) reaching zero instead.

```cpp
int completedBuilds = 0;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-completed-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-completed-builds.h"
```
