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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
