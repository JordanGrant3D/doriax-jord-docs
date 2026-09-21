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


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
