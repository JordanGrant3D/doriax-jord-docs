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

## [Body2D](body-2d.md).groupIndexFilter

Group override for collision filtering. Shapes with the same positive group always collide; shapes with the same negative group never collide.

```cpp
void setGroupIndexFilter(int16_t groupIndex);
void setGroupIndexFilter(size_t shapeIndex, int16_t groupIndex);
int16_t getGroupIndexFilter() const;
int16_t getGroupIndexFilter(size_t shapeIndex) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-group-index-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-group-index-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
