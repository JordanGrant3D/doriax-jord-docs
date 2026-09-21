[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
