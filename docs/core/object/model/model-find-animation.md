[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
