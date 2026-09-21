---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).playAnimation()

Switches the model's active clip with a smooth crossfade: every other running clip fades out while the requested one fades in over `fadeTime` seconds. Overloads without a fade time use the target clip's authored default fade time; a `fadeTime` of `0` switches instantly.

```cpp
void playAnimation(int index);
void playAnimation(int index, float fadeTime);
void playAnimation(const std::string& name);
void playAnimation(const std::string& name, float fadeTime);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-play-animation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-play-animation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
