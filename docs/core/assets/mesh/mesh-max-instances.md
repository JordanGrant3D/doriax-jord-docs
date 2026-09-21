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

## [Mesh](mesh.md).maxInstances

Capacity of the GPU instance buffer. A CharacterController script sizes it to the roster count before spawning helmet instances for every teammate, then reads back `getMaxInstances` for the HUD.

```cpp
void setMaxInstances(unsigned int maxInstances);
unsigned int getMaxInstances() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-max-instances.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-max-instances.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
