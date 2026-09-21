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

## [Animation](animation.md).defaultFadeTime

The crossfade duration in seconds used by `Model::playAnimation` when it is called without an explicit fade time. Authored per-clip and saved with the scene; a CharacterController sets it once per clip and then switches states with the fade-less `playAnimation` overload.

```cpp
float getDefaultFadeTime() const;
void setDefaultFadeTime(float time);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-default-fade-time.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-default-fade-time.h"
```
