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

## [ResourceBuildInfo](resource-build-info.md).progress

Build fill amount from `0.0` (just started) to `1.0` (done). Multiply by `100` for the warmup-bar percent label. [ResourceProgress::updateProgress](../resource-progress/resource-progress-update-progress.md) clamps values into this range before storing them.

```cpp
float progress = 0.0f; // 0.0 to 1.0
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-progress.h"
```
