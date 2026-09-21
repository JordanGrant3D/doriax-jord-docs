---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).setMaxResourceLoadingThreads(size_t maxThreads)

Sets the maximum number of worker threads used for background asset loading.

```cpp
static void setMaxResourceLoadingThreads(size_t maxThreads);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-set-max-resource-loading-threads.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-set-max-resource-loading-threads.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
