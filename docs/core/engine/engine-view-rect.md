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

## [Engine](engine.md).viewRect

Viewport rectangle computed from canvas size, screen size, and scaling mode.

```cpp
static Rect getViewRect();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-view-rect.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-view-rect.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
