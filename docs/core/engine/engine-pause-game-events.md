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

## [Engine](engine.md).pauseGameEvents(bool pause)

Pauses delivery of gameplay events (`onUpdate`, `onFixedUpdate`, input callbacks) without stopping the render loop.

```cpp
static void pauseGameEvents(bool pause);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-pause-game-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-pause-game-events.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
