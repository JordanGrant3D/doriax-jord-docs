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

## [Engine](engine.md).maxDeltatime

Upper bound, in **seconds**, for the value returned by `deltatime` and used by the update loop. Default `0.25`. Lower it for stricter clamping after stalls such as scene loads or debugger breaks.

```cpp
static float getMaxDeltatime();
static void setMaxDeltatime(float seconds);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/engine/engine-max-deltatime.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/engine/engine-max-deltatime.h"
```
