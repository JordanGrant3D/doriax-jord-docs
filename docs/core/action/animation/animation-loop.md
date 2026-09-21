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

## [Animation](animation.md).loop

Whether the clip restarts from the beginning after playing to completion. A CharacterController loops `idle` and `walk` but plays `jump` once with `setLoop(false)`.

```cpp
bool isLoop() const;
void setLoop(bool loop);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-loop.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-loop.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
