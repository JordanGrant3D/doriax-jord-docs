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

## [OverallBuildProgress](overall-build-progress.md).hasActiveBuilds

`true` while at least one build is in flight, `false` once the tracker drains. Loading screens use it to show or hide the whole overlay; it mirrors [ResourceProgress::hasActiveBuilds](../resource-progress/resource-progress-has-active-builds.md).

```cpp
bool hasActiveBuilds = false;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-has-active-builds.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/overall-build-progress/overall-build-progress-has-active-builds.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
