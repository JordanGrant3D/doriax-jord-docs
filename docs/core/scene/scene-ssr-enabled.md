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

## [Scene](scene.md).setSSREnabled()

Enables screen-space reflections, which replace a surface's IBL environment reflection where the reflection ray hits on-screen geometry, and `isSSREnabled()` reports whether it is on. Toggling it reloads meshes to build the G-buffer shaders.

```cpp
void setSSREnabled(bool ssrEnabled);
bool isSSREnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-enabled.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
