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

## [Engine](engine.md).setScene(Scene* scene)

Sets the main scene. Pass `nullptr` to clear the main scene. Gated behind a one-shot flag so the switch happens exactly once.

```cpp
static void setScene(Scene* scene);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-set-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-set-scene.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
