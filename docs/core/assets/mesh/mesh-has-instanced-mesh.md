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

## [Mesh](mesh.md).hasInstancedMesh

Reports whether the instancing buffer exists. A CharacterController script guards every roster helmet update with it so LOD code never touches a missing buffer.

```cpp
bool hasInstancedMesh() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-has-instanced-mesh.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-has-instanced-mesh.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
