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

## [Engine](engine.md).systemTime

Monotonic wall-clock time in **seconds**, independent of scene pausing and update loop throttling.

```cpp
static double getSystemTime();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-system-time.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-system-time.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
