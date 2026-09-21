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

## [MeshSystem](mesh-system.md).onComponentRemoved

Reacts when a mesh-related component leaves an entity. A CharacterController script strips the third-kit component after the match and trusts the hook to release its polygons.

```cpp
void onComponentRemoved(Entity entity, ComponentId componentId) override;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/mesh-system/mesh-system-on-component-removed.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/mesh-system/mesh-system-on-component-removed.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
