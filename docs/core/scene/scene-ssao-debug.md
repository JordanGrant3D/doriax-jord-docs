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

## [Scene](scene.md).setSSAODebug()

Enables the SSAO debug view, which outputs the raw screen-space AO buffer as grayscale instead of shaded color, and `isSSAODebug()` reports whether it is on. It is a tuning aid and is not serialized.

```cpp
void setSSAODebug(bool debug);
bool isSSAODebug() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-ssao-debug.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-ssao-debug.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
