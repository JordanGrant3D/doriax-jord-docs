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

## [Mesh](mesh.md).createInstancedMesh

Allocates the GPU instancing buffer. A CharacterController script calls it once before spawning helmet instances for the whole roster.

```cpp
void createInstancedMesh();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-create-instanced-mesh.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-create-instanced-mesh.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
