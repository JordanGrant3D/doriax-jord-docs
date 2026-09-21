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

## [Engine](engine.md).removeScene(Scene* scene)

Removes a specific scene from the active scene stack. If it was queued with `executeSceneOnce`, the pending one-shot execution is cancelled.

```cpp
static void removeScene(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-remove-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-remove-scene.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
