[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).loadOBJ()

Loads a Wavefront OBJ file explicitly. Use it instead of `loadModel` when the file extension is non-standard or you want to pin the format. Returns `true` on success.

```cpp
bool loadOBJ(const std::string& filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-load-obj.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-load-obj.h"
```
