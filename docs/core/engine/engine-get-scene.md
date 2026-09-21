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

## [Engine](engine.md).getScene()

Returns the current main scene, or `nullptr` if none is set.

```cpp
static Scene* getScene();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-get-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-get-scene.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
