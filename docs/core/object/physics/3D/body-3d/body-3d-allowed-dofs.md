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

## [Body3D](body-3d.md).setAllowedDOFsAll() / setAllowedDOFs2DPlane() / setAllowedDOFs()

Constrains which axes the body may translate or rotate on. Lock all rotations to keep the character upright.

```cpp
void setAllowedDOFsAll();
void setAllowedDOFs2DPlane();
void setAllowedDOFs(bool translationX, bool translationY, bool translationZ, bool rotationX, bool rotationY, bool rotationZ);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-allowed-dofs.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-allowed-dofs.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
