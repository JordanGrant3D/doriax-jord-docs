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

## [Input](input.md).isTouch()

Returns `true` if there is at least one active touch contact. CharacterController scripts use it to switch to touch steering on mobile.

```cpp
static bool isTouch();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-touch.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-touch.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
