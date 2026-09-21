[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
