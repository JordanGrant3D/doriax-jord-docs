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

## [Body2D](body-2d.md).setShapeDensity() / getShapeDensity()

Sets or reads the shape mass density (mass per unit area). Body mass derives from density, so call `applyMassFromShapes()` after changing it at runtime. No-index overloads target the first shape; indexed overloads take `size_t index`.

```cpp
void setShapeDensity(float density);
void setShapeDensity(size_t index, float density);
float getShapeDensity() const;
float getShapeDensity(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-density.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-density.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
