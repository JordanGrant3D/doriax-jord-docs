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

## [Body2D](body-2d.md).setShapeEnableHitEvents() / setShapeContactEvents() / setShapePreSolveEvents() / setShapeSensorEvents()

Toggles per-shape delivery of physics events: one-shot hit events, sustained contact events, pre-solve events (fired before the impulse is resolved), and sensor-overlap events. No-index overloads target the first shape; indexed overloads take `size_t index`.

```cpp
void setShapeEnableHitEvents(bool hitEvents);
void setShapeContactEvents(bool contactEvents);
void setShapePreSolveEvents(bool preSolveEvent);
void setShapeSensorEvents(bool sensorEvents);
void setShapeEnableHitEvents(size_t index, bool hitEvents);
void setShapeContactEvents(size_t index, bool contactEvents);
void setShapePreSolveEvents(size_t index, bool preSolveEvent);
void setShapeSensorEvents(size_t index, bool sensorEvents);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-set-events.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-shape-set-events.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
