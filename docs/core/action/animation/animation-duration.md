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

## [Animation](animation.md).duration

Total length of the animation in seconds. When a [Model](../../object/model/model.md) loads a GLTF file this is set automatically from the clip data; for procedural sequences built with `addActionFrame`, set it to cover the last frame.

```cpp
const float& getDuration() const;
void setDuration(const float& duration);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/action/animation/animation-duration.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/action/animation/animation-duration.h"
```
