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

## [Engine](engine.md).setMousePosition(float x, float y)

Sets the mouse position in logical canvas coordinates and updates the reported input position. On desktop builds this also moves the OS cursor.

```cpp
static void setMousePosition(float x, float y);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-set-mouse-position.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-set-mouse-position.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
