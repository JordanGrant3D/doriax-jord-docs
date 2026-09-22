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

## [Object](object.md).removeParent()

Detaches this object from its parent, re-parenting it to the scene root. A pickup script calls it when an item leaves its container.

```cpp
void removeParent();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/object-remove-parent.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/object-remove-parent.h"
```

---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
