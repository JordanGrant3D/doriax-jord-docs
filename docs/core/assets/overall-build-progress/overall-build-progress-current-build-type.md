---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OverallBuildProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OverallBuildProgress](overall-build-progress.md).currentBuildType

Asset kind of the most recently started build. Loading screens switch the "now loading" icon per type; pair it with [ResourceProgress::getResourceTypeName](../resource-progress/resource-progress-get-resource-type-name.md) for the display label.

```cpp
ResourceType currentBuildType; // Type of the most recently started build
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-type.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-type.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
