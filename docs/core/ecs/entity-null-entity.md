---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Entity
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Entity](entity.md).NULL_ENTITY

Sentinel for a null or invalid entity identifier (`0`). Entity handles default to it before assignment, components store it when a slot is empty (for example `Transform::parent`), and detaching calls such as `Object::removeParent()` re-parent to it internally. Always compare against it before wrapping a stored entity in an `Object` or other handle.

```cpp
#define NULL_ENTITY 0
```

```c++ title="testerScript.cpp"
--8<-- "code/core/ecs/entity-null-entity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/ecs/entity-null-entity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
