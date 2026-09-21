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

## [OverallBuildProgress](overall-build-progress.md).currentBuildName

Name of the most recently started build (empty when nothing is in flight). Loading screens show it as the `"Now loading: X"` label; it mirrors the [name](../resource-build-info/resource-build-info-name.md) of the latest [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshot.

```cpp
std::string currentBuildName;  // Name of the most recently started build
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-name.h"
```
