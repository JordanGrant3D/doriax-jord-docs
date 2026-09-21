[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
