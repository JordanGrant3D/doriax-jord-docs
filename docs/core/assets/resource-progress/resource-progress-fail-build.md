[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
ResourceProgress
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ResourceProgress](resource-progress.md).failBuild(id)

Removes a failed build from the tracker and logs the failure. Unknown `id`s log an `<unknown>` failure without touching tracked builds. Use it on asset errors so a dead build never pins the loading screen at a frozen percent.

```cpp
static void failBuild(uint64_t id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-fail-build.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-fail-build.h"
```
