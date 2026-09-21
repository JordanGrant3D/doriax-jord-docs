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

## [Engine](engine.md).setCanvasSize(int canvasWidth, int canvasHeight)

Sets the preferred logical canvas dimensions. The actual `canvasWidth`/`canvasHeight` reported at runtime may differ depending on the active `scalingMode`.

```cpp
static void setCanvasSize(int canvasWidth, int canvasHeight);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-set-canvas-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-set-canvas-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
