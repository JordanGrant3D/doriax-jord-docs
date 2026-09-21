[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
