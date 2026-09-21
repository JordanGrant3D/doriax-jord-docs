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

## [Engine](engine.md).interpolationAlpha

Value in `[0, 1)` representing how far the current rendered frame is between the previous and next fixed-update steps. Use it to visually interpolate physics-driven entities and avoid temporal aliasing.

```cpp
static double getInterpolationAlpha();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-interpolation-alpha.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-interpolation-alpha.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
