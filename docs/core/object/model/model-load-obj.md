---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
