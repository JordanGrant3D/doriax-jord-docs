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

## [Model](model.md).getAnimation()

Returns the skeletal or morph-target animation clip at zero-based `index` as an [**Animation**](../../action/animation/animation.md) handle. Use the handle to configure looping with `setLoop` before starting playback with `playAnimation`.

```cpp
Animation getAnimation(int index);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-get-animation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-get-animation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
