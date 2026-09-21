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

## [Engine](engine.md).removeAllScenes()

Removes all scenes, including the main scene and all layers. Gated behind a one-shot flag because it tears down the whole scene stack.

```cpp
static void removeAllScenes();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-remove-all-scenes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-remove-all-scenes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
