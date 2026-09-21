[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
