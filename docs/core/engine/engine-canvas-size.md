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

## [Engine](engine.md).canvasWidth, canvasHeight

Logical canvas dimensions after scaling is applied. These may differ from the preferred size when a non-NATIVE scaling mode is active. CharacterController HUD scripts use them to anchor UI to the screen center.

```cpp
static int getCanvasWidth();
static int getCanvasHeight();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-canvas-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-canvas-size.h"
```
