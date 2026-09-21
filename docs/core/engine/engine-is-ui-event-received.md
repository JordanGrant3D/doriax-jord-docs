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

## [Engine](engine.md).isUIEventReceived()

Returns `true` if any UI widget consumed a pointer event during the current frame. Use with `ignoreEventsHandledByUI` to prevent gameplay from reacting to UI clicks.

```cpp
static bool isUIEventReceived();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-is-ui-event-received.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-is-ui-event-received.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
