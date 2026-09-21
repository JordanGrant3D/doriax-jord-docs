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

## [EntityHandle](entityhandle.md).name

Human-readable tag for this entity. Used by the editor to display entities in the scene hierarchy, and can be used in game code for debugging or lookup. Accessed through the `setName` setter and the `getName` getter.

```cpp
void setName(const std::string& name);
std::string getName() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/ecs/entityhandle-name.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/ecs/entityhandle-name.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
