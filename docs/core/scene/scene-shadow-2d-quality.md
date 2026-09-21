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

## [Scene](scene.md).setShadow2DQuality()

Sets the filter quality of 2D light shadows (PCF taps along the 1D polar shadow map), and `getShadow2DQuality()` returns it. More taps smooth the same penumbra width and remove banding on wide penumbras.

```cpp
void setShadow2DQuality(ShadowQuality quality);
ShadowQuality getShadow2DQuality() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-shadow-2d-quality.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-shadow-2d-quality.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
