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

## [ScriptBase](scriptbase.md).getScene()

Returns the scene this script belongs to. Use it to build `Object` wrappers, query components, or reach scene systems such as the camera.

```cpp
Scene* getScene() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/script/scriptbase-get-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/script/scriptbase-get-scene.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
