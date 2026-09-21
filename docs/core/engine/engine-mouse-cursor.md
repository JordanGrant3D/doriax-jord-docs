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

## [Engine](engine.md).mouseCursor

The OS mouse cursor shape (`ARROW`, `IBEAM`, `CROSSHAIR`, `POINTING_HAND`, ...).

```cpp
static void setMouseCursor(CursorType type);
static CursorType getMouseCursor();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-mouse-cursor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-mouse-cursor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
