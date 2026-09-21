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

## [EntityHandle](entityhandle.md).getEntity()

Returns the raw ECS entity identifier. Use this when interfacing with the low-level entity APIs, or to compare and track the wrapped entity (e.g. confirming the player handle still points at a valid entity).

```cpp
Entity getEntity() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/ecs/entityhandle-get-entity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/ecs/entityhandle-get-entity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
