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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
