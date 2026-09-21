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

## [Scene](scene.md).draw()

Triggers a render pass for this scene. Normally called by the engine each frame; use it only for custom render pipelines that drive scene rendering manually.

```cpp
void draw();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-draw.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-draw.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
