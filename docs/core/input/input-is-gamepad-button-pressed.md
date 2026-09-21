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

## [Input](input.md).isGamepadButtonPressed(int id, int button)

Returns `true` while the given button is held down on controller `id`. Pass a `D_GAMEPAD_BUTTON_*` constant (e.g. `D_GAMEPAD_BUTTON_A`). Returns `false` for an unknown controller.

```cpp
static bool isGamepadButtonPressed(int id, int button);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-gamepad-button-pressed.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-gamepad-button-pressed.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
