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

## [OBB](obb.md).operator=() / operator==() / operator!=()

Copy one box into another, then compare boxes field-by-field. Use it to snapshot tuned volumes and detect when a working copy drifts.

```cpp
OBB& operator=(const OBB& rhs);
bool operator==(const OBB& rhs) const;
bool operator!=(const OBB& rhs) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/obb/obb-operators.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/obb/obb-operators.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
