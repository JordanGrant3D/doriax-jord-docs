---
version: 0.7.1
status: untested # Options: untested, bot-tested, human-tested
---
---
Object
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Object](object.md).addChild()

Attaches a child object to this object's hierarchy; the child's transform becomes relative to the parent. A container script calls it once its slots are spawned.

```cpp
void addChild(Object* child);
void addChild(Entity child);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-add-child.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-add-child.h"
```

---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
