[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setFixedResolutionWidth()

Sets the internal render width in pixels used when fixed resolution is enabled, and `getFixedResolutionWidth()` returns it. The buffer is recreated on the next frame with no interruption.

```cpp
void setFixedResolutionWidth(unsigned int width);
unsigned int getFixedResolutionWidth() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-fixed-resolution-width.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-fixed-resolution-width.h"
```
