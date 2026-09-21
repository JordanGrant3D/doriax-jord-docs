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

## [Engine](engine.md).clearPools()

Fully clears the texture, texture-data, model, shader, sound, and font caches, including entries still referenced elsewhere. Use it for engine teardown, not routine level unloading. C++ only.

```cpp
static void clearPools();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-clear-pools.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-clear-pools.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
