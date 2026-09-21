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

## [Body3D](body-3d.md).getShapeDensity() / setShapeDensity()

Density in kg/m3 used to compute mass. Set it after adding shapes and before `load()`, or reload after runtime changes.

```cpp
void setShapeDensity(float density);
void setShapeDensity(size_t index, float density);
float getShapeDensity() const;
float getShapeDensity(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-shape-density.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-shape-density.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
