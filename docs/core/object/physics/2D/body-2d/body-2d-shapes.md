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

## [Body2D](body-2d.md).removeAllShapes() / getNumShapes() / getShapeType()

Manages the body's shape list. Removes all shapes, counts attached shapes, and queries a shape's type by index. Re-call `load()` after changing shapes at runtime.

```cpp
void removeAllShapes();
size_t getNumShapes() const;
Shape2DType getShapeType(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shapes.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shapes.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
