---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Engine
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Engine](engine.md).scalingMode

How the logical canvas is mapped to the physical window (`FITWIDTH`, `FITHEIGHT`, `LETTERBOX`, `CROP`, `STRETCH`, `NATIVE`). HUD scripts read it back to confirm the active layout mode.

```cpp
static void setScalingMode(Scaling scalingMode);
static Scaling getScalingMode();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-scaling-mode.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-scaling-mode.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
