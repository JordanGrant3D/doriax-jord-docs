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

## [OverallBuildProgress](overall-build-progress.md).totalProgress

Mean fill amount across all active builds (`0.0`–`1.0`); `0.0` when nothing is in flight. Multiply by `100` for the total warmup-bar percent label. Computed by [ResourceProgress::getOverallProgress](../resource-progress/resource-progress-get-overall-progress.md).

```cpp
float totalProgress = 0.0f;  // 0.0 to 1.0
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-total-progress.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
