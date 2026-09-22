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

## [OBB](obb.md).setNull() / isNull() / setInfinite() / isInfinite() / setFinite() / isFinite()

Mark a box as null (empty), infinite (contains everything), or finite (a real volume), and query which state it is in. Use it to disable a trigger volume or reset a box before refitting it.

```cpp
void setNull();
bool isNull() const;
void setInfinite();
bool isInfinite() const;
void setFinite();
bool isFinite() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-state.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-state.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
