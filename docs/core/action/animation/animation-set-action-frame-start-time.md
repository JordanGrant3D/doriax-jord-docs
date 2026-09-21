[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
