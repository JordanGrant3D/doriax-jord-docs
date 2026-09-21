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

## [Engine](engine.md).preferredCanvasWidth, preferredCanvasHeight

The dimensions originally passed to `setCanvasSize`, unaffected by scaling.

```cpp
static int getPreferredCanvasWidth();
static int getPreferredCanvasHeight();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-preferred-canvas-size.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-preferred-canvas-size.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
