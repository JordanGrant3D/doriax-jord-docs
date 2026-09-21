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

## [Scene](scene.md).load()

Initializes the scene subsystems, creating the default camera when none is set. Called automatically by the engine when the scene is added; only call it manually when managing scenes outside the engine lifecycle.

```cpp
void load();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
