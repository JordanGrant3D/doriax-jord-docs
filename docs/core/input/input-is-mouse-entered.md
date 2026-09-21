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

## [Input](input.md).isMouseEntered()

Returns `true` while the mouse cursor is inside the canvas boundary. CharacterController scripts gate hover highlights on it so off-canvas movement is ignored.

```cpp
static bool isMouseEntered();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-is-mouse-entered.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-is-mouse-entered.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
