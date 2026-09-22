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

## [Body2D](body-2d.md).createPolygonShape()

Creates a convex polygon shape from the given vertices. Box2D requires the shape to be convex, so the vertices are reduced to their convex hull; provide them in counter-clockwise order.

```cpp
int createPolygonShape(std::vector<Vector2> vertices);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-create-polygon-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-create-polygon-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
