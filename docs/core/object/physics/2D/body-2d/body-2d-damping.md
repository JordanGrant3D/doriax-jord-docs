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

## [Body2D](body-2d.md).damping()

Drag coefficients that bleed off translation (`linearDamping`) and rotation (`angularDamping`) over time. Values in `[0, ∞)`; zero means no damping. Useful for top-down movement that should glide to a stop, or for settling jittery bodies without touching gravity or mass.

```cpp
void setLinearDamping(float linearDamping);
void setAngularDamping(float angularDamping);
float getLinearDamping() const;
float getAngularDamping() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-damping.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-damping.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
