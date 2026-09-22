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

## [Body2D](body-2d.md).setShapeFriction() / getShapeFriction()

Sets or reads the shape Coulomb friction coefficient (`[0, ∞)`), which controls sliding resistance. `0` is frictionless, `1` is high friction. No-index overloads target the first shape; indexed overloads take `size_t index`.

```cpp
void setShapeFriction(float friction);
void setShapeFriction(size_t index, float friction);
float getShapeFriction() const;
float getShapeFriction(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-friction.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-friction.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
