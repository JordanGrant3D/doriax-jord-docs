---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
CollideShapeResult3D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [CollideShapeResult3D](collide-shape-result-3d.md).getContactPointOnA()

World-space contact point on the first shape. The CharacterController logs it as the predicted impact point before the solver runs.

```cpp
Vector3 getContactPointOnA() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-contact-point-on-a.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-contact-point-on-a.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
