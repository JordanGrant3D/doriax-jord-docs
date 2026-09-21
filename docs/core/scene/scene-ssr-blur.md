---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).setSSRBlur()

Sets the glossy blur amount of screen-space reflections in `[0..1]`, and `getSSRBlur()` returns it. `0` keeps mirror-sharp reflections; higher values blur the reflection with surface roughness.

```cpp
void setSSRBlur(float blur);
float getSSRBlur() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-blur.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-blur.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
