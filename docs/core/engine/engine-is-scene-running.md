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

## [Engine](engine.md).isSceneRunning(Scene* scene)

Returns `true` if the given scene is currently in the active scene stack.

```cpp
static bool isSceneRunning(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-is-scene-running.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-is-scene-running.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
