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

## [Engine](engine.md).removeAllSceneLayers(bool removeOneTimeScenes)

Removes all layered scenes. When `removeOneTimeScenes` is `true`, one-time scenes added via `executeSceneOnce` are also removed.

```cpp
static void removeAllSceneLayers(bool removeOneTimeScenes);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-remove-all-scene-layers.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-remove-all-scene-layers.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
