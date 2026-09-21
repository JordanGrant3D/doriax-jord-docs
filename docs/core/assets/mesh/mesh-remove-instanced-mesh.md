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

## [Mesh](mesh.md).removeInstancedMesh

Frees the GPU instancing buffer. A CharacterController script calls it when the squad scene unloads so benched-player helmets release their buffer.

```cpp
void removeInstancedMesh();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-remove-instanced-mesh.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-remove-instanced-mesh.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
