[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
