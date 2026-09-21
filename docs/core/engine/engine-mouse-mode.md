[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
