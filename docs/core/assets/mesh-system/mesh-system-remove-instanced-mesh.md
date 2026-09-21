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

## [MeshSystem](mesh-system.md).removeInstancedMesh

Frees an entity instancing buffer. A CharacterController script tears down the helmet rack buffer when leaving the locker room to reclaim GPU memory.

```cpp
void removeInstancedMesh(Entity entity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-remove-instanced-mesh.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-remove-instanced-mesh.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
