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

## [Engine](engine.md).getQueuedResourceCount()

Returns the number of resources still waiting to be loaded on background threads.

```cpp
static size_t getQueuedResourceCount();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-get-queued-resource-count.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-get-queued-resource-count.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
