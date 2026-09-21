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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
