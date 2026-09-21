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

## [Body3D](body-3d.md).collideKinematicVsNonDynamic

Lets a kinematic body report collisions against static and other kinematic bodies, normally skipped for performance.

```cpp
bool isCollideKinematicVsNonDynamic() const;
void setCollideKinematicVsNonDynamic(bool collideKinematicVsNonDynamic);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-collide-kinematic-vs-non-dynamic.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-collide-kinematic-vs-non-dynamic.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
