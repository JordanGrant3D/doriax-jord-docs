[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceProgress](resource-progress.md).getCurrentBuild()

Returns the most recently started [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshot (falling back to the first tracked build if the most recent id is gone, or a default snapshot when nothing is tracked). Loading screens read its [name](../resource-build-info/resource-build-info-name.md) and [progress](../resource-build-info/resource-build-info-progress.md) for the spotlight "now loading" row.

```cpp
static ResourceBuildInfo getCurrentBuild();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-current-build.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-current-build.h"
```
