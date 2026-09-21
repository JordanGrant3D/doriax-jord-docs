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

## [Animation](animation.md).addActionFrame()

Adds a frame to the animation timeline. `startTime` is the offset in seconds from the animation start. `duration` overrides the action's own duration; a `duration` of `0` (or lower) means auto — the frame follows the action's own duration, which is also what the overloads without a `duration` parameter use. When `target` is omitted, the animation's own target is used. An animation cannot contain itself, directly or through nested animations: a call that would create such a cycle is rejected with an error log.

```cpp
void addActionFrame(float startTime, float duration, Entity action, Entity target);
void addActionFrame(float startTime, Entity timedAction, Entity target);
void addActionFrame(float startTime, float duration, Entity action);
void addActionFrame(float startTime, Entity timedAction);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-add-action-frame.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-add-action-frame.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
