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

## [Engine](engine.md).allowEventsOutCanvas

When `true`, mouse move and scroll events are delivered even when the cursor is outside the canvas bounds.

```cpp
static void setAllowEventsOutCanvas(bool allowEventsOutCanvas);
static bool isAllowEventsOutCanvas();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-allow-events-out-canvas.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-allow-events-out-canvas.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
