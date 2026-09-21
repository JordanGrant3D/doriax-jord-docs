[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
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
