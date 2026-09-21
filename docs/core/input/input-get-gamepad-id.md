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

## [Input](input.md).getGamepadId(size_t index)

Returns the real id of the `index`-th connected controller, or `-1` if `index` is out of range. Because gamepad ids are sparse (they can have gaps after a disconnect), this is the correct way to enumerate connected controllers together with [numGamepads](input-num-gamepads.md).

```cpp
static int getGamepadId(size_t index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-gamepad-id.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-gamepad-id.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
