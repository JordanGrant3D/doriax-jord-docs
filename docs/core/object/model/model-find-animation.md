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

## [Model](model.md).findAnimation()

Returns the animation clip whose animation entity name matches `name` (initialized from the clip name exported by the DCC tool) as an [**Animation**](../../action/animation/animation.md) handle. Renaming an animation entity changes the string this method accepts.

```cpp
Animation findAnimation(const std::string& name);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-find-animation.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-find-animation.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
