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

## [Input](input.md).numGamepads()

Returns the count of currently connected controllers. This is a count, not the highest id — combine it with [getGamepadId](input-get-gamepad-id.md) to iterate.

```cpp
static size_t numGamepads();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-num-gamepads.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-num-gamepads.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
