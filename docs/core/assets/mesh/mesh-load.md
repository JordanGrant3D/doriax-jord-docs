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

## [Mesh](mesh.md).load

Uploads the mesh to the GPU. A CharacterController script calls `load` after swapping the hero body mesh at runtime and logs failure so the outfit swap can fall back to the default kit.

```cpp
bool load();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
