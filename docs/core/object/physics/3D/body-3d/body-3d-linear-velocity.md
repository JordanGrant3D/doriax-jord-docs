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

## [Body3D](body-3d.md).linearVelocity

Linear velocity in world units per second. The character controller writes `moveSpeed` into `x/z` and `jumpForce` into `y`.

```cpp
Vector3 getLinearVelocity() const;
void setLinearVelocity(Vector3 linearVelocity);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-linear-velocity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-linear-velocity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
