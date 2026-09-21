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
