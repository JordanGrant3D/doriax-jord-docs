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

## [Body3D](body-3d.md).setOverrideMassAndInertia()

Computes mass and inertia for a solid box of the given size and density. Set before `load()`; pairs with the `mass` property.

```cpp
void setOverrideMassAndInertia(Vector3 solidBoxSize, float solidBoxDensity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-override-mass-and-inertia.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-override-mass-and-inertia.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
