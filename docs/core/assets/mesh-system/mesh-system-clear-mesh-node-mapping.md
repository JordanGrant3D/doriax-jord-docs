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

## [MeshSystem](mesh-system.md).clearMeshNodeMapping

Drops the mesh-node lookup of a kit model. A CharacterController script clears it when armor node names change between kit revisions so stale parts never attach.

```cpp
void clearMeshNodeMapping(ModelComponent& model);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-clear-mesh-node-mapping.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-clear-mesh-node-mapping.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
