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
