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

## [ResourceBuildInfo](resource-build-info.md).isActive

Snapshot flag marking the build as still in flight (`true` from [ResourceProgress::startBuild](../resource-progress/resource-progress-start-build.md) until it is removed by complete or fail). Loading screens dim rows whose snapshot reports `false`.

```cpp
bool isActive = false;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-is-active.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-is-active.h"
```
