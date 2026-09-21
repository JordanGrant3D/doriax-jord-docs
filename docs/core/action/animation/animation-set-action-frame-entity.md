[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
