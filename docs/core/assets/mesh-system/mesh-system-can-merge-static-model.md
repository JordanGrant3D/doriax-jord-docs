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

## [MeshSystem](mesh-system.md).canMergeStaticModel

Reports whether a loaded kit model can flatten into the root entity. A CharacterController script checks it before merging static armor pieces, logging the reason when a skinned outfit refuses the merge.

```cpp
bool canMergeStaticModel(const ModelComponent& model, const MeshComponent& mesh, std::string* reason = nullptr) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-can-merge-static-model.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-can-merge-static-model.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
