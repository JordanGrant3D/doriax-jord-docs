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

## [MeshSystem](mesh-system.md).createCylinder

Builds a cylinder mesh. A CharacterController script builds trophy pedestals around the outfit station with tapered radii for the championship display.

```cpp
void createCylinder(MeshComponent& mesh, float baseRadius=1, float topRadius=1, float height=2, unsigned int slices=36, unsigned int stacks=18);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-create-cylinder.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-create-cylinder.h"
```
