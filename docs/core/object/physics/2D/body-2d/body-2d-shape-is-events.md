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

## [Body2D](body-2d.md).isShapeEnableHitEvents() / isShapeContactEvents() / isShapePreSolveEvents() / isShapeSensorEvents()

Reads whether per-shape physics event delivery is enabled: one-shot hit events, sustained contact events, pre-solve events, and sensor-overlap events. No-index overloads target the first shape; indexed overloads take `size_t index`.

```cpp
bool isShapeEnableHitEvents() const;
bool isShapeContactEvents() const;
bool isShapePreSolveEvents() const;
bool isShapeSensorEvents() const;
bool isShapeEnableHitEvents(size_t index) const;
bool isShapeContactEvents(size_t index) const;
bool isShapePreSolveEvents(size_t index) const;
bool isShapeSensorEvents(size_t index) const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-is-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-is-events.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
