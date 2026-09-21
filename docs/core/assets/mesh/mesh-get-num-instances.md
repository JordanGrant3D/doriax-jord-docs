[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1

---
Mesh
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Mesh](mesh.md).getNumInstances

Live instance count for polygon budgeting. A CharacterController script logs it each LOD check and drops the crowd puppets to billboards when the count exceeds budget.

```cpp
size_t getNumInstances();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-get-num-instances.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-get-num-instances.h"
```
