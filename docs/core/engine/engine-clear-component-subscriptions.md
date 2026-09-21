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

## [Engine](engine.md).clearComponentSubscriptions(Scene* scene)

Removes the callbacks registered on a scene's components (button, UI, panel, scrollbar, text edit, sound, and action events). Call this before the code behind them is unloaded.

```cpp
static void clearComponentSubscriptions(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-clear-component-subscriptions.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-clear-component-subscriptions.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
