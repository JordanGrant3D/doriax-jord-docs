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

## [Engine](engine.md).clearUnusedPools()

Removes cache entries no longer referenced outside their pool while keeping resources that active scenes still own. The safer cleanup after destroying a scene or switching projects. C++ only.

```cpp
static void clearUnusedPools();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-clear-unused-pools.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-clear-unused-pools.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
