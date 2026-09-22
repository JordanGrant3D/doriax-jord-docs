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

## [Body2D](body-2d.md).createBoxShape() / createCenteredBoxShape() / createRoundedBoxShape()

Creates box colliders. `createBoxShape` places the corner at the entity's local origin; the centered variants offset the box (optionally with a center and angle); the rounded variant adds a corner radius. Each returns the shape index.

```cpp
int createBoxShape(float width, float height);
int createCenteredBoxShape(float width, float height);
int createCenteredBoxShape(float width, float height, Vector2 center, float angle);
int createRoundedBoxShape(float width, float height, float radius);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-create-box-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-create-box-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
