---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).framerate

Current frames-per-second estimate, computed from the raw unclamped frame time so it stays accurate even on stalled frames where `deltatime` is clamped.

```cpp
static float getFramerate();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-framerate.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-framerate.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
