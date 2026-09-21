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

## [Input](input.md).numTouches()

Returns the count of currently active touch contacts. CharacterController scripts use it to enable two-finger sprint gestures.

```cpp
static size_t numTouches();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/input/input-num-touches.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/input/input-num-touches.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
