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

## [MeshSystem](mesh-system.md).createSphere

Builds a UV sphere mesh. A CharacterController script adds helmet-dome placeholders on the roster shelf, lowering slices for the far shelf to save polygons.

```cpp
void createSphere(MeshComponent& mesh, float radius=1, unsigned int slices=36, unsigned int stacks=18);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-sphere.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-sphere.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
