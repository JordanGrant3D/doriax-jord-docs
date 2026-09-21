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

## [Animation](animation.md).fadeIn() / fadeOut()

Crossfade primitives that ramp the clip's blend weight over `duration` seconds. `fadeIn` starts the clip (if not already running) and ramps its weight from `0` up to `1`; `fadeOut` ramps a running clip's weight down to `0` and stops it when it reaches zero. A `duration` of `0` is instant. For clips on the same [Model](../../object/model/model.md), `Model::playAnimation` performs this crossfade for you.

```cpp
void fadeIn(float duration);
void fadeOut(float duration);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-fade-in-fade-out.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-fade-in-fade-out.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
