---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
EntityHandle
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [EntityHandle](entityhandle.md).entityOwned

Whether this handle owns its entity. When `true`, the entity is destroyed when the handle is destroyed. Set it to `false` to detach the handle from the entity's lifetime. Accessed through the `setEntityOwned` setter and the `isEntityOwned` getter.

```cpp
void setEntityOwned(bool entityOwned);
bool isEntityOwned() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/ecs/entityhandle-entity-owned.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/ecs/entityhandle-entity-owned.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
