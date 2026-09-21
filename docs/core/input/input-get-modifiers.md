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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
