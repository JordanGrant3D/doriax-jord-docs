---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
OBB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [OBB](obb.md).ZERO

A null OBB. Useful as an initializer before growing bounds with `enclose()`.

```cpp
static const OBB ZERO;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-zero.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-zero.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
