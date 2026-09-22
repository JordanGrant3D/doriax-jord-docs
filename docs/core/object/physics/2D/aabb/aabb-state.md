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

## [AABB](aabb.md).setNull() / isNull() / setInfinite() / isInfinite() / setFinite() / isFinite()

An AABB can be in one of three states: null (undefined, no extent), finite (a normal bounding box), or infinite (the entire space). Intersection tests respect these states.

```cpp
void setNull();
bool isNull(void) const;
void setInfinite();
bool isInfinite(void) const;
void setFinite();
bool isFinite(void) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/aabb/aabb-state.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/aabb/aabb-state.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
