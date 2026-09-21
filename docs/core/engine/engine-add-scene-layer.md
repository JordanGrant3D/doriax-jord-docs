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

## [Engine](engine.md).addSceneLayer(Scene* scene)

Renders an additional scene as a layer on top of the main scene. Commonly used for HUDs, overlays, or pause menus.

```cpp
static void addSceneLayer(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-add-scene-layer.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-add-scene-layer.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
