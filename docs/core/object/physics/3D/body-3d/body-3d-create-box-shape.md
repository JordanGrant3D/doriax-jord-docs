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

## [Body3D](body-3d.md).createBoxShape()

Creates a solid box collider and returns its shape index. The offset overload positions the shape relative to the entity origin.

```cpp
int createBoxShape(float width, float height, float depth);
int createBoxShape(Vector3 position, Quaternion rotation, float width, float height, float depth);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-box-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/3D/body-3d/body-3d-create-box-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
