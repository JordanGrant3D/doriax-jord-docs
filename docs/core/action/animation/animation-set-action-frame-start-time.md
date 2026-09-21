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

## [Animation](animation.md).setActionFrameStartTime()

Modifies the start time (offset in seconds from the animation start) of an existing frame by index. Use it to re-time a step of a procedural sequence without rebuilding the timeline.

```cpp
void setActionFrameStartTime(unsigned int index, float startTime);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-set-action-frame-start-time.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-set-action-frame-start-time.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
