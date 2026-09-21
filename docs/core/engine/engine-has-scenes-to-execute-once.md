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

## [Engine](engine.md).hasScenesToExecuteOnce()

Returns `true` while any scene queued with `executeSceneOnce` is still waiting to be drawn.

```cpp
static bool hasScenesToExecuteOnce();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-has-scenes-to-execute-once.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-has-scenes-to-execute-once.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
