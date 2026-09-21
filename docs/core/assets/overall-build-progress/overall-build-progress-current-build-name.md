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

## [OverallBuildProgress](overall-build-progress.md).currentBuildName

Name of the most recently started build (empty when nothing is in flight). Loading screens show it as the `"Now loading: X"` label; it mirrors the [name](../resource-build-info/resource-build-info-name.md) of the latest [ResourceBuildInfo](../resource-build-info/resource-build-info.md) snapshot.

```cpp
std::string currentBuildName;  // Name of the most recently started build
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-current-build-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
