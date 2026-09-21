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
