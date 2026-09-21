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

## [Engine](engine.md).ignoreEventsHandledByUI

When `true` (default), gameplay input callbacks are skipped for events already consumed by a UI widget.

```cpp
static void setIgnoreEventsHandledByUI(bool ignoreEventsHandledByUI);
static bool isIgnoreEventsHandledByUI();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-ignore-events-handled-by-ui.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-ignore-events-handled-by-ui.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
