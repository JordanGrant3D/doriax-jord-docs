---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ScriptBase
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ScriptBase](scriptbase.md).scene

Protected `Scene*` handle set by the `ScriptBase` constructor. Read it through `getScene()` to access transforms, components, or the ECS.

```cpp
// protected member (ScriptBase.h)
Scene* scene;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/script/scriptbase-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/script/scriptbase-scene.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
