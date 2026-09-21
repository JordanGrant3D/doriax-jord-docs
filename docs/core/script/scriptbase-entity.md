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

## [ScriptBase](scriptbase.md).entity

Protected `Entity` handle set by the `ScriptBase` constructor. Read it through `getEntity()` to wrap the attached entity in an `Object` or query components.

```cpp
// protected member (ScriptBase.h)
Entity entity;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/script/scriptbase-entity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/script/scriptbase-entity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
