[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceProgress](resource-progress.md).getAllActiveBuilds()

Returns a copy of every active [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshot, sorted most-recent-first by [startTime](../resource-build-info/resource-build-info-start-time.md). Loading screens iterate it to draw one warmup bar per asset.

```cpp
static std::vector<ResourceBuildInfo> getAllActiveBuilds();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-all-active-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-all-active-builds.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
