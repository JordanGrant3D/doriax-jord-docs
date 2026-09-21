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

## [Engine](engine.md).getOnInit()

Safe accessor for the Init event. Register startup callbacks here (the `DORIAX_INIT` macro does this for the `init()` function) instead of touching the event object directly.

```cpp
static FunctionSubscribe<void()>& getOnInit();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-get-on-init.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-get-on-init.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
