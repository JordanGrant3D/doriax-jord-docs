[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setSSAORadius()

Sets the view-space sampling radius of screen-space ambient occlusion in world units, and `getSSAORadius()` returns it. Larger values gather occlusion from farther surfaces.

```cpp
void setSSAORadius(float radius);
float getSSAORadius() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-radius.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-radius.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
