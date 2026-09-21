---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Animation
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Animation](animation.md).setActionFrameEntity()

Replaces the action entity for a given frame, keeping its start time, duration, and target. Use it to swap one step of a procedural sequence (for example a walk step for a jump hop) without rebuilding the timeline.

```cpp
void setActionFrameEntity(unsigned int index, Entity action);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-set-action-frame-entity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-set-action-frame-entity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
