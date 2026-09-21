[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).loadModel()

Loads a 3D model file from disk, detecting the format from the file extension (`.obj` for Wavefront OBJ, `.gltf` / `.glb` for GLTF). Returns `true` on success; on failure check the log for details.

```cpp
bool loadModel(const std::string& filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-load-model.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-load-model.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
