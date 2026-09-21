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

## [MeshSystem](mesh-system.md).collectSubmeshOverrides

Snapshots per-submesh armor edits keyed by primitive ordinal. A CharacterController script collects the player's trim overrides before reloading a kit so the outfit swap survives the rebuild.

```cpp
SubmeshOverrides collectSubmeshOverrides(Entity entity, const ModelComponent& model) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-collect-submesh-overrides.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-collect-submesh-overrides.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
