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

## [ResourceProgress](resource-progress.md).completeBuild(id)

Removes a finished build from the tracker and logs its completion. Unknown `id`s log an `<unknown>` completion without touching tracked builds. Once the last build is removed, [hasActiveBuilds](resource-progress-has-active-builds.md) flips to `false` and loading screens hide the overlay.

```cpp
static void completeBuild(uint64_t id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-complete-build.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-complete-build.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
