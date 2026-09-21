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

## [Input](input.md).isGamepadConnected(int id)

Returns `true` while a controller with the given id is connected. Ids are sparse, so enumerate connected controllers with [getGamepadId](input-get-gamepad-id.md) instead of assuming ids `0..numGamepads()-1`.

```cpp
static bool isGamepadConnected(int id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-gamepad-connected.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-gamepad-connected.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
