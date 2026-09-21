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

## [ResourceProgress](resource-progress.md).getOverallProgress()

Returns the aggregate [OverallBuildProgress](../overall-build-progress/overall-build-progress.md) snapshot: mean `totalProgress`, `totalBuilds`, and the most recently started build's name and type. With no active builds every field reads as zero, empty, or `false`. One call per frame feeds the total warmup bar, the resource counter, and the "now loading" label.

```cpp
static OverallBuildProgress getOverallProgress();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-get-overall-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-get-overall-progress.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
