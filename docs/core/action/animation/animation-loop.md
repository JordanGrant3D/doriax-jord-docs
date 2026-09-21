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
