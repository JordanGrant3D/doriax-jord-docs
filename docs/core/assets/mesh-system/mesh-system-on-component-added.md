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

## [MeshSystem](mesh-system.md).onComponentAdded

Reacts when a mesh-related component joins an entity. A CharacterController script adds the kit mesh component at runtime and trusts the system hook to schedule the first polygon build.

```cpp
void onComponentAdded(Entity entity, ComponentId componentId) override;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-on-component-added.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-on-component-added.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
