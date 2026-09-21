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

## [CollideShapeResult3D](collide-shape-result-3d.md).getPenetrationAxis()

Axis and depth of penetration. An upward axis means the character is coming down onto a landing surface.

```cpp
Vector3 getPenetrationAxis() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-penetration-axis.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/collide-shape-result-3d/collide-shape-result-3d-get-penetration-axis.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
