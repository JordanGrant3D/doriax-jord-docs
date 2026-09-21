---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Occluder2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Occluder2D](occluder-2d.md).shape

Selects how the occluder outline is built: `AUTO_QUAD` derives it from the sibling mesh bounds, `POLYGON` uses the custom point list. Calling `addVertex` switches to `POLYGON` automatically. The stealth gallery uses `AUTO_QUAD` for crates and `POLYGON` for custom shadow walls.

```cpp
void setShape(Occluder2DShape shape);
Occluder2DShape getShape() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-shape.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-shape.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
