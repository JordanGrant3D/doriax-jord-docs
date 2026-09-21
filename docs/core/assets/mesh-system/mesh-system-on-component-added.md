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
