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

## [Mesh](mesh.md).clearInstances

Removes every roster instance. A CharacterController script clears bench helmets when the match ends so the next scene starts from an empty polygon slate.

```cpp
void clearInstances();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh/mesh-clear-instances.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh/mesh-clear-instances.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
