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

## [Scene](scene.md).setSSAOBias()

Sets the view-space depth bias that prevents SSAO self-occlusion artifacts on flat surfaces, and `getSSAOBias()` returns it. Keep it small to preserve fine contact detail.

```cpp
void setSSAOBias(float bias);
float getSSAOBias() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-bias.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-bias.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
