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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
