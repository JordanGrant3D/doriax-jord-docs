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

## [Mesh](mesh.md).updateInstances

Pushes edited instances to the GPU. A CharacterController script calls it after repositioning every bench helmet so the new formation renders this frame.

```cpp
void updateInstances();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-update-instances.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-update-instances.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
