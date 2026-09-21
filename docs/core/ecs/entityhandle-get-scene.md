[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
EntityHandle
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [EntityHandle](entityhandle.md).getScene()

Returns a pointer to the owning `Scene`. CharacterController scripts use it to wrap scene entities (e.g. `Object(getScene(), getEntity())`) so the player handle always resolves against the live scene.

```cpp
Scene* getScene() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/ecs/entityhandle-get-scene.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/ecs/entityhandle-get-scene.h"
```
