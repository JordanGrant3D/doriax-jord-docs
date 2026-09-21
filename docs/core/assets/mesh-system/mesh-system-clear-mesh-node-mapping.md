[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

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
