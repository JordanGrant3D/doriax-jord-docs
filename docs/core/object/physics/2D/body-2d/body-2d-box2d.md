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

## [Body2D](body-2d.md).getBox2DBody() / getBox2DShape() / getBox2DChain()

Low-level Box2D handles for direct access to the underlying simulation objects. Escape hatch for advanced use; prefer the wrapper API when possible.

```cpp
b2BodyId getBox2DBody() const;
b2ShapeId getBox2DShape(size_t index) const;
b2ChainId getBox2DChain(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-box2d.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-box2d.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
