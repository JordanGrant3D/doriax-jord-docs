[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
