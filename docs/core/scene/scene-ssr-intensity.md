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

## [Scene](scene.md).setSSRIntensity()

Sets the overall screen-space reflection strength multiplier applied in the composite, and `getSSRIntensity()` returns it. A CharacterController script fades it down in dark interiors.

```cpp
void setSSRIntensity(float intensity);
float getSSRIntensity() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-intensity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-intensity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
