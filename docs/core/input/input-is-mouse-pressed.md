---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Input
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Input](input.md).isMousePressed(int button)

Returns `true` while the given mouse button is held down. Pass a `D_MOUSE_BUTTON_*` constant (e.g. `D_MOUSE_BUTTON_LEFT`).

```cpp
static bool isMousePressed(int button);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-mouse-pressed.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-mouse-pressed.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
