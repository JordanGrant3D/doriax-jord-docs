---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
