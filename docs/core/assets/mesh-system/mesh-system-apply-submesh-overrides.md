[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).applySubmeshOverrides

Reapplies saved armor edits after a kit reload. A CharacterController script restores the player's trim choices onto the freshly loaded outfit so swaps never reset the custom look.

```cpp
void applySubmeshOverrides(const SubmeshOverrides& overrides, Entity entity, const ModelComponent& model) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-apply-submesh-overrides.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-apply-submesh-overrides.h"
```
