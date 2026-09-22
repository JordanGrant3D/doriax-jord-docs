---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).setBitsFilter()

Sets collision category and mask bits together. Two bodies collide only when each category overlaps the other's mask.

```cpp
void setBitsFilter(uint16_t categoryBits, uint16_t maskBits);
void setBitsFilter(size_t shapeIndex, uint16_t categoryBits, uint16_t maskBits);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-bits-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-bits-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
