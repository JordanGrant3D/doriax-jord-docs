---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).getModelFilenameKey

Canonical key for a model path so differently-spelled kit files map to one cache entry. A CharacterController script normalizes outfit paths before comparing the equipped kit against the wardrobe list.

```cpp
static std::string getModelFilenameKey(const std::string& filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-get-model-filename-key.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-get-model-filename-key.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
