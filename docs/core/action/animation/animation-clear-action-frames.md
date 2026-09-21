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

## [Animation](animation.md).clearActionFrames()

Removes all frames from the timeline, leaving an empty animation. Use it to recycle a procedural sequence object for a new set of steps.

```cpp
void clearActionFrames();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-clear-action-frames.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-clear-action-frames.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
