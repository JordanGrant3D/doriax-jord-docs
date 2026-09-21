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

## [Body3D](body-3d.md).friction

Surface sliding resistance shared across all shapes on this body. Higher values stop the character faster on landing.

```cpp
float getFriction() const;
void setFriction(float friction);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-friction.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-friction.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
