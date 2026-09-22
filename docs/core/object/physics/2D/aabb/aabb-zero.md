---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
AABB
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [AABB](aabb.md).ZERO

A valid AABB with all extents at zero — not a null box. Useful as an initializer before growing bounds with `merge()`.

```cpp
static const AABB ZERO;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-zero.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-zero.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
