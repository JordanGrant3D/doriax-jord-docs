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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
