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

## [Engine](engine.md).mouseMode

How the mouse cursor behaves: `NORMAL` (visible, free), `HIDDEN`, `CAPTURED` (hidden, locked for mouse-look), or `CONFINED`. Use `CAPTURED` for CharacterController free-look.

```cpp
static void setMouseMode(MouseMode mode);
static MouseMode getMouseMode();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-mouse-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-mouse-mode.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
