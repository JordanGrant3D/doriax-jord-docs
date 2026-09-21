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

## [Scene](scene.md).setSSRMaxDistance()

Sets the maximum screen-space reflection ray length in view-space units, and `getSSRMaxDistance()` returns it. Longer rays catch more distant reflections at higher cost.

```cpp
void setSSRMaxDistance(float maxDistance);
float getSSRMaxDistance() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-max-distance.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-max-distance.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
