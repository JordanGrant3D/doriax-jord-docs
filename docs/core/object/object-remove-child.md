---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).removeChild()

Detaches a child object from this object's hierarchy, leaving it parented to the scene root. A cleanup script calls it when a slot is despawned.

```cpp
void removeChild(Object* child);
void removeChild(Entity child);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-remove-child.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-remove-child.h"
```

---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
