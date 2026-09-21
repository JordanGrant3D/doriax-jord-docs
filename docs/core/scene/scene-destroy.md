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

## [Scene](scene.md).destroy()

Tears down all subsystems and destroys every entity in the scene. Called automatically by the engine when the scene is removed from the stack; only call it manually for explicit teardown.

```cpp
void destroy();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-destroy.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-destroy.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
