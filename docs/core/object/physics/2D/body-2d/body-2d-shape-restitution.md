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

## [Body2D](body-2d.md).setShapeRestitution() / getShapeRestitution()

Sets or reads the shape restitution (bounciness) in `[0, 1]`. `0` means no bounce, `1` is perfectly elastic. No-index overloads target the first shape; indexed overloads take `size_t index`.

```cpp
void setShapeRestitution(float restitution);
void setShapeRestitution(size_t index, float restitution);
float getShapeRestitution() const;
float getShapeRestitution(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-restitution.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-restitution.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
