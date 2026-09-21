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

## [Animation](animation.md).ownedActions

Whether child action entities referenced by the animation's frames are destroyed when the animation is destroyed. Useful for animations built entirely in code, such as a procedural CharacterController intro sequence.

```cpp
bool isOwnedActions() const;
void setOwnedActions(bool ownedActions);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-owned-actions.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-owned-actions.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
