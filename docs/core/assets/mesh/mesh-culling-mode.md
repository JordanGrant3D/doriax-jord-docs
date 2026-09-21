---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).cullingMode

Which faces to cull (`BACK` by default). A CharacterController script mirrors the character mesh for a locker-room reflection and flips the culling mode so the mirrored body renders with correct winding.

```cpp
void setCullingMode(CullingMode cullingMode);
CullingMode getCullingMode() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-culling-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-culling-mode.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
