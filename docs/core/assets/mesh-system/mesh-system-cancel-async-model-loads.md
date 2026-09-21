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

## [MeshSystem](mesh-system.md).cancelAsyncModelLoads

Stops all pending kit loads for this scene. A CharacterController script cancels halftime streaming when the player skips the outfit swap.

```cpp
void cancelAsyncModelLoads();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-async-model-loads.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-async-model-loads.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
