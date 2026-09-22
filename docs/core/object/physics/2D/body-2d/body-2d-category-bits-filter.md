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

## [Body2D](body-2d.md).categoryBitsFilter

Collision layers this shape belongs to. Another body collides with it only when its mask includes one of these bits.

```cpp
void setCategoryBitsFilter(uint16_t categoryBits);
void setCategoryBitsFilter(size_t shapeIndex, uint16_t categoryBits);
uint16_t getCategoryBitsFilter() const;
uint16_t getCategoryBitsFilter(size_t shapeIndex) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-category-bits-filter.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-category-bits-filter.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
