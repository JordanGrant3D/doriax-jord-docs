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

## [Scene](scene.md).setSSRMaxSteps()

Sets the linear march sample count of screen-space reflections, and `getSSRMaxSteps()` returns it. Higher counts give sharper, longer reflections at more cost.

```cpp
void setSSRMaxSteps(int maxSteps);
int getSSRMaxSteps() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssr-max-steps.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssr-max-steps.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
