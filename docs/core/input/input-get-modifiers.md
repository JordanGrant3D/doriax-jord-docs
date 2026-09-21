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

## [Input](input.md).getModifiers()

Returns the current modifier-key bitmask. Check individual modifiers with bitwise AND against `D_MODIFIER_*` bits (e.g. `D_MODIFIER_SHIFT`).

```cpp
static int getModifiers();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-get-modifiers.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-get-modifiers.h"
```
