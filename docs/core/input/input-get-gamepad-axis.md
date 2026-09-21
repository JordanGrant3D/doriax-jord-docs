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

## [Input](input.md).getGamepadAxis(int id, int axis)

Returns the current value of an analog axis on controller `id`, in the range `-1.0` to `1.0`. Pass a `D_GAMEPAD_AXIS_*` constant. Sticks are down-positive on Y (up is `-1`); triggers rest at `-1` and reach `+1` when fully pressed. Returns `0.0` for an unknown controller.

```cpp
static float getGamepadAxis(int id, int axis);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-gamepad-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-gamepad-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
