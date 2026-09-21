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

## [ResourceProgress](resource-progress.md).startBuild(id, type, name)

Registers a new in-flight build snapshot at `progress = 0.0`, marked active with `startTime` set to now, and makes it the most recent build. Reusing an `id` overwrites the previous entry. Loading screens observe the new row through [getAllActiveBuilds](resource-progress-get-all-active-builds.md).

```cpp
static void startBuild(uint64_t id, ResourceType type, const std::string& name);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/resource-progress/resource-progress-start-build.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/resource-progress/resource-progress-start-build.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
