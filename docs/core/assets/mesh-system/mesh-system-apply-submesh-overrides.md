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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
