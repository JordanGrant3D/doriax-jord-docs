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

## [Engine](engine.md).callMouseInTouchEvent

When `true`, receiving a touch event also fires the equivalent mouse event. Useful for cross-platform testing.

```cpp
static void setCallMouseInTouchEvent(bool callMouseInTouchEvent);
static bool isCallMouseInTouchEvent();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-call-mouse-in-touch-event.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-call-mouse-in-touch-event.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
