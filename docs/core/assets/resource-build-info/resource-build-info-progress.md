---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ResourceBuildInfo
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceBuildInfo](resource-build-info.md).progress

Build fill amount from `0.0` (just started) to `1.0` (done). Multiply by `100` for the warmup-bar percent label. [ResourceProgress::updateProgress](../resource-progress/resource-progress-update-progress.md) clamps values into this range before storing them.

```cpp
float progress = 0.0f; // 0.0 to 1.0
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-build-info/resource-build-info-progress.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-build-info/resource-build-info-progress.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
