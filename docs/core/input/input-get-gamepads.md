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

## [Input](input.md).getGamepads()

Returns all connected controllers. Each `Gamepad` holds an `int id`, a `std::string name`, and the current button and axis state.

```cpp
static std::vector<Gamepad> getGamepads();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-gamepads.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-gamepads.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
