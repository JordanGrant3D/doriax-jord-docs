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

## [Input](input.md).findGamepadIndex(int id)

Returns the internal index of the controller with the given id, or `SIZE_MAX` if it is not connected. Most code should use [isGamepadConnected](input-is-gamepad-connected.md) and [getGamepadId](input-get-gamepad-id.md) instead.

```cpp
static size_t findGamepadIndex(int id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-find-gamepad-index.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-find-gamepad-index.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
