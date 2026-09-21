---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
ScriptBase
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [ScriptBase](scriptbase.md).getEntity()

Returns the entity this script is attached to. Pair it with `getScene()` to construct an `Object` for transform access.

```cpp
Entity getEntity() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/script/scriptbase-get-entity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/script/scriptbase-get-entity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
