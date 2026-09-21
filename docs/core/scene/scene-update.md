---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).update()

Runs one variable-step update for all subscribed systems, with `dt` as the frame delta in seconds. Normally called by the engine; call it manually only for stepped simulations.

```cpp
void update(double dt);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-update.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-update.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
