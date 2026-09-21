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

## [MeshSystem](mesh-system.md).createOrUpdateTilemap

Rebuilds the tactics-board tilemap mesh. A CharacterController script refreshes the formation grid after the coach drags a winger into a new slot.

```cpp
bool createOrUpdateTilemap(TilemapComponent& tilemap, MeshComponent& mesh);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-tilemap.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-or-update-tilemap.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
