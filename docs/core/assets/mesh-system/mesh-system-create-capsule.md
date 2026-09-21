[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
MeshSystem
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [MeshSystem](mesh-system.md).createCapsule

Builds a capsule mesh. A CharacterController script spawns capsule body doubles on the far training pitch as cheap LOD stand-ins for full character meshes.

```cpp
void createCapsule(MeshComponent& mesh, float baseRadius=1, float topRadius=1, float height=2, unsigned int slices=36, unsigned int stacks=18);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-capsule.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-capsule.h"
```
