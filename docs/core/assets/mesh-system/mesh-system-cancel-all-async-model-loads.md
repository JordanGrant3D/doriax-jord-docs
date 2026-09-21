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

## [MeshSystem](mesh-system.md).cancelAllAsyncModelLoads

Stops pending kit loads across all scenes. A CharacterController script calls it on shutdown so no wardrobe worker outlives the title screen.

```cpp
static void cancelAllAsyncModelLoads();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-all-async-model-loads.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-all-async-model-loads.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
