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

## [Engine](engine.md).executeSceneOnce(Scene* scene)

Adds a scene that runs for a single draw, then is automatically removed. Useful for rendering a scene to a texture on demand, such as a thumbnail. Passing `nullptr` has no effect.

```cpp
static void executeSceneOnce(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-execute-scene-once.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-execute-scene-once.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
