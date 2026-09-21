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
