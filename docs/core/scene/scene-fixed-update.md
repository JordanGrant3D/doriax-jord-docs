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

## [Scene](scene.md).fixedUpdate()

Runs one fixed-step update for physics and other time-sensitive systems. `dt` normally equals the engine update time; call it manually only for stepped simulations.

```cpp
void fixedUpdate(double dt);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-update.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-update.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
