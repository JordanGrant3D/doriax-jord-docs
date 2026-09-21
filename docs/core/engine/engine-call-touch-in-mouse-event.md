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

## [Engine](engine.md).callTouchInMouseEvent

When `true`, receiving a mouse event also fires the equivalent touch event.

```cpp
static void setCallTouchInMouseEvent(bool callTouchInMouseEvent);
static bool isCallTouchInMouseEvent();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-call-touch-in-mouse-event.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-call-touch-in-mouse-event.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
