[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
