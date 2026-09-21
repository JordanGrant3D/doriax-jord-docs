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

## [MeshSystem](mesh-system.md).cancelAsyncModelLoad

Stops one pending kit load. A CharacterController script cancels the third-kit stream when the wardrobe closes so polygons go back to the match.

```cpp
void cancelAsyncModelLoad(Entity entity, const std::string& filename);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-async-model-load.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-cancel-async-model-load.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
