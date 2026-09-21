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

## [ResourceProgress](resource-progress.md).getActiveBuildCount()

Returns the number of builds currently tracked. Loading screens show it as the `"N assets left"` resource counter; it matches [OverallBuildProgress::totalBuilds](../overall-build-progress/overall-build-progress-total-builds.md) whenever builds are active.

```cpp
static int getActiveBuildCount();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-active-build-count.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-active-build-count.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
