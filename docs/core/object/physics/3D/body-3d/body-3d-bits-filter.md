---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body3D](body-3d.md).setBitsFilter()

Sets collision category and mask bits together. A contact happens only when each category overlaps the other's mask.

```cpp
void setBitsFilter(uint16_t category, uint16_t mask);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-bits-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-bits-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
