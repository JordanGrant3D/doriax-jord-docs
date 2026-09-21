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

## [Engine](engine.md).clearAllSubscriptions(bool includeLifecycle)

Removes all registered callbacks from all engine events. When `includeLifecycle` is `false`, lifecycle events such as `onViewLoaded` are preserved.

```cpp
static void clearAllSubscriptions(bool includeLifecycle);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-clear-all-subscriptions.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-clear-all-subscriptions.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
