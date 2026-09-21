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

## [Input](input.md).getGamepadName(int id)

Returns the human-readable name of the controller with the given id, or an empty string if it is not connected. CharacterController scripts log it once when a pad is first seen.

```cpp
static std::string getGamepadName(int id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-gamepad-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-gamepad-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
