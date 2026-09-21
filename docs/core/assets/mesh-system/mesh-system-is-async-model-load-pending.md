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

## [MeshSystem](mesh-system.md).isAsyncModelLoadPending

Reports whether one kit file is still streaming. A CharacterController script polls the away kit before allowing the second-half outfit swap.

```cpp
bool isAsyncModelLoadPending(Entity entity, const std::string& filename) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-is-async-model-load-pending.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-is-async-model-load-pending.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
