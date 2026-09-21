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

## [Body3D](body-3d.md).applyImpulse()

Instantaneous velocity change in Newton-seconds. Prefer impulses over forces for one-shot jumps, hits, and explosions.

```cpp
void applyImpulse(const Vector3& impulse);
void applyImpulse(const Vector3& impulse, const Vector3& point);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-apply-impulse.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-apply-impulse.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
